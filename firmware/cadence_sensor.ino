#include <Arduino.h>

// System Constants
const int SENSOR_PIN = 1; // Hall Effect sensor connected to Digital Pin D1
volatile unsigned long lastPulseTime = 0;
volatile unsigned long pulseInterval = 0;
volatile bool newPulseDetected = false;

// Interrupt Service Routine (ISR) for tracking magnetic passes
void IRAM_ATTR onPulse() {
    unsigned long currentTime = millis();
    // Debounce sensor readings (ignore pulses faster than 120 RPM / 500ms)
    if (currentTime - lastPulseTime > 200) {
        pulseInterval = currentTime - lastPulseTime;
        lastPulseTime = currentTime;
        newPulseDetected = true;
    }
}

void setup() {
    Serial.begin(115200);
    
    // Configure internal hardware pullup for the digital sensor line
    pinMode(SENSOR_PIN, INPUT_PULLUP);
    
    // Attach hardware interrupt to detect falling edge when magnet passes sensor
    attachInterrupt(digitalPinToInterrupt(SENSOR_PIN), onPulse, FALLING);
}

void loop() {
    static unsigned long lastUpdate = 0;
    float currentRPM = 0.0;

    // Check if a new pedal rotation occurred
    if (newPulseDetected) {
        newPulseDetected = false;
        // Calculate Revolutions Per Minute based on time interval
        currentRPM = 60000.0 / pulseInterval;
    }

    // Timeout: If no pedal movement is detected for 3 seconds, set RPM to 0
    if (millis() - lastPulseTime > 3000) {
        currentRPM = 0.0;
    }

    // Print values to serial console every 500ms
    if (millis() - lastUpdate > 500) {
        lastUpdate = millis();
        Serial.print("Current Cadence RPM: ");
        Serial.println(currentRPM);
        
        // Wireless transmission pipelines (BLE and ANT+ stacks) will accept
        // the currentRPM variable here once hardware pairing initiates.
    }
}
