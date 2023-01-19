/*
Touch Sensor Test

This example shows how to use the touch sensor to turn on and off an LED.

method:
* The touch sensor is connected to digital pin 2.
* When the touch sensor is touched, the LED turns on.
* When the touch sensor is not touched, the LED turns off.

Components:
* 1 x Arduino Uno
* 1 x Touch Sensor
* 1 x LED
* 1 x 220 ohm resistor
* 1 x Breadboard

Connections:
* Connect the touch sensor to digital pin 2.
* Connect the LED to digital pin 13.
* Connect the long leg of the LED to ground through a 220 ohm resistor.


*/

const int touchPin = 2;  // touch sensor connected to digital pin 2
const int ledPin = 13;   // LED connected to digital pin 13

void setup() {
  pinMode(touchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(touchPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}