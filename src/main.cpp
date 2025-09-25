#include <Arduino.h>

int ledPin = 13; // LED บนบอร์ด Arduino Uno

void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);//Thammarong
}

void loop() {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
    delay(1000);

    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
    delay(1000);
}