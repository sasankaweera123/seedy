/*

Soil Moisture Sensor test

This code is used to test the soil moisture sensor

method:

1. Connect the soil moisture sensor to the arduino board
2. Connect the arduino board to the computer
3. Open the serial monitor in chanel 9600
4. See the serial monitor

Components:

1. Arduino board
2. Soil moisture sensor
3. Jumper wires
4. Breadboard


*/


#define sensorPin A0 // select the input pin 

void setup(){
    Serial.begin(9600);
}
void loop(){
    Serial.println(analogRead(sensorPin));
    delay(1000);
}