#include <Arduino.h>
#include <MeMCore.h>

MeDCMotor motor(M1);

void setup() {
    Serial.begin(25566);
}

void loop() {
    bool b = Serial.available() > 0;
}