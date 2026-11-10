#include <Arduino.h>

void idf_setup();
void idf_loop();

void setup() {
    if (psramInit()) {
        Serial.println("\nThe PSRAM is correctly initialized");
    } else {
        Serial.println("\nPSRAM does not work");
    }

    idf_setup();
}

void loop() {
    idf_loop();
}
