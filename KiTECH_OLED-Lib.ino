#include "KiTECH_OLED.h"

KiTECH_OLED oled;

int errorLed = 4;

void setup() {
    Serial.begin(9600);

    pinMode(errorLed, OUTPUT);

    if (oled.setup()) {
        oled.print("setup OK");
    }
    oled.clear();
}

void loop() {
    oled.print_at(5, 5, "Hello World!");
}
