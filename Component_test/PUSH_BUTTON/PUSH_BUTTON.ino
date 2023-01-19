/*

Push button test

This code is used to test the push button

method:

1. Connect the push button to the arduino board
2. Connect the arduino board to the computer
3. Open the serial monitor in chanel 9600
4. Press the button and see the serial monitor

Components:

1. Arduino board
2. Push button
3. Jumper wires
4. 10k resistor
5. Breadboard

*/


const int buttonPin = 2; //button pin 
const int button = 0; // button status

void setup(){
 
  pinMode(buttonPin, INPUT);// Set buttonPin - pin 2 as an output
  // pinMode(buttonPin, INPUT_PULLUP); and can use the inbuilt resistor

  Serial.begin(9600); //Open the serial monitor in chanel 9600

}

void loop(){
 
  int button = digitalRead(buttonPin); // get the button read
  Serial.println(button); // print the button status in serial monitor 
  delay(1000);
  
  
}
