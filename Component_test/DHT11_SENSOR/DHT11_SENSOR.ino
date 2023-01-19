/*

DHT11 SENSOR TEST

This sketch reads data from a DHT11 sensor and prints the temperature and humidity to the Serial Monitor.

method:
* The DHT11 sensor is connected to digital pin 2.

Components:

* 1 x Arduino Uno
* 1 x DHT11 sensor
* 1 x Breadboard

Connections:
* Connect the DHT11 sensor to digital pin 2.

*/


#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTTYPE DHT11   // DHT 11
#define DHTPIN 2        // Digital pin connected to the DHT sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" *C ");
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }

  delay(2000); // Wait 2 seconds between measurements
}

