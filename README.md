# Project Seedy 🪴

This project is designed to detect humidity, temperature, and soil moisture levels using a DHT11 sensor and a soil moisture sensor. The data collected is then used to recommend appropriate plants for the current conditions. A touch sensor is used to activate the device and a push button is used to send a message using a GSM module. The data can also be accessed via a website, where users can view the recommended plants.

## Hardware ⚒

- Arduino board
- DHT11 sensor for measuring temperature and humidity
- Soil moisture sensor
- Touch sensor
- Push button
- GSM module

## Software ✨

- Arduino IDE is used to write and upload the code to the Arduino board.
- The code uses various libraries such as Adafruit_Sensor.h, DHT.h, DHT_U.h, SoftwareSerial.h to communicate with the sensors and the GSM module.
- The code also uses the touch sensor, push button, and GSM module to send the message of recommended plants and current conditions.
- Website is used to display the recommended plants and the current conditions in the graphical way.

## Libraries 📚

- Adafruit_Sensor.h
- DHT.h
- DHT_U.h
- SoftwareSerial.h (if using a GSM module that requires it)

## Setup ⚙

- Connect the DHT11 sensor to the appropriate pin on the Arduino board.
- Connect the soil moisture sensor to the appropriate pin on the Arduino board.
- Connect the touch sensor to the appropriate pin on the Arduino board.
- Connect the push button to the appropriate pin on the Arduino board.
- Connect the GSM module to the appropriate pins on the Arduino board.
- Make sure you have the correct libraries installed in Arduino IDE
- Upload the code to the Arduino board.

## Usage ✍

- Touch the touch sensor to activate the device and begin measuring temperature, humidity, and soil moisture levels.
- Based on the current conditions, appropriate plants will be recommended.
- Press the push button to send a message containing the recommended plants and current conditions via the GSM module.
- The data can also be accessed via a website, where users can view the recommended plants.

## Note 📝

- Make sure you have a valid sim card inserted and your GSM module is configured correctly to send SMS.
- Make sure that the website is hosted and configured correctly before accessing it.
- Make sure to calibrate the soil moisture sensor according to your soil type.

## Conclusion 👑

- This project can be used for gardening and agriculture purposes, it helps to monitor the environmental condition and suggests the appropriate plants. The use of GSM module and website allows the user to check the status remotely.

## Find 🔎

📫 How to reach me... , </br></br>
<a href="https://www.facebook.com/sajeev.weerakoon.1/">
<img align="left" alt="Facebook" width="120px" src="https://img.shields.io/badge/Facebook-1877F2?style=for-the-badge&logo=facebook&logoColor=white" />
</a>
<a href="https://www.instagram.com/sasanka_weerakoon/">
<img align="left" alt="Instagram" width="120px" src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white" />
</a>
<br>
<br>

## License 🗞

[![License](https://img.shields.io/badge/License-Apache_2.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)
