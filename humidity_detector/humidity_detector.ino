/*

Humidity Detector

This project is to detect the humidity of the soil and dht sensor and send the value to the serial port and GSM module. The GSM module will send the value to the phone number.

Components:
- Arduino Uno
- LCD 16x2
- I2C Module
- Soil Moisture Sensor (Capacitive soil moisture sensor)
- DHT11 Sensor
- Push Button
- 10k Ohm Resistor
- GSM Module

Method:
- Read the sensor value
- Convert the value to precentage
- Read the humidity value from the DHT sensor
- Average the value
- Print the value to the LCD
- Send the value to the serial port
- Send the value to the GSM module
- Send the value to the phone number

*/

#include <LiquidCrystal_I2c.h> // include the library code
#include <SoftwareSerial.h> // include the library code
#include <DHT.h>
LiquidCrystal_I2c lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display
SoftwareSerial mySerial(10, 11); // RX, TX


#define sensorPin A0 // select the input pin for the potentiometer
#define DHTPIN 2     // what pin we're connected to
#define DHTTYPE DHT11   // DHT 11  (AM2302)
// Initialize DHT sensor for normal 16mhz Arduino
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor.


const int dry= 595; // dry value
const int wet= 239; // wet value

const int buttonPin = 2; // the number of the pushbutton pin
int buttonState = 0; // variable for reading the pushbutton status
float hum;  //Stores humidity value


void setup(){
    mySerial.begin(9600); // set up Serial library at 9600 bps
    Serial.begin(9600); // set up Serial library at 9600 bps
    lcd.init(); // initialize the lcd
    lcd.backlight(); // turn on the backlight
    dht.begin(); // start the DHT sensor

    pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input
}

void loop(){
    int sensorValue = analogRead(sensorPin); // read the input pin
    int precentage = map(sensorValue, dry, wet, 0, 100); // map the value to 0-100
    hum = dht.readHumidity(); // read the humidity value from the dht sensor

    // print the value to the serial monitor
    Serial.print("Humidity: ");
    Serial.print((precentage+hum)/2); // print the value to the serial monitor (average)
    Serial.println("%");
    delay(1000);

    // print the value to the LCD
    lcd.setCursor(1,0); // set the cursor to column 1, line 0
    lcd.print("Sensor Value: ");
    lcd.setCursor(3,1); // set the cursor to column 3, line 1
    lcd.print(sensorValue); // print the value to the LCD
    lcd.print(" ");
    lcd.setCursor(7,1); // set the cursor to column 7, line 1
    lcd.print("--");
    lcd.setCursor(10,1); // set the cursor to column 10, line 1
    lcd.print((precentage+hum)/2); // print the value to the LCD (average)
    lcd.print("%");

    buttonState = digitalRead(buttonPin); // read the state of the pushbutton value
    // check if the pushbutton is pressed.
    // if it is, the buttonState is HIGH:
    if (buttonState == HIGH) {
        // send the value to the serial port
        sendMessage(precentage);
    }
    
}

void sendMessage(int value){
    // send the value to the serial port
    mySerial.println("AT+CMGF=1"); // set SMS mode to text
    delay(1000);
    mySerial.println("AT+CMGS=\"+94771234567\"\r"); // set the phone number
    delay(1000);
    mySerial.print("Humidity: "); // send the message
    mySerial.print(value);
    mySerial.println("%");
    delay(1000);
    mySerial.println((char)26); // ASCII code of CTRL+Z
    delay(1000);
}
