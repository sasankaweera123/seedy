/*

GSM Module Test

This code is used to test the GSM module.

method:

1. Connect the GSM module to the arduino board
2. Connect the arduino board to the computer
3. Open the serial monitor in chanel 9600
4. Send 's' to send a message
5. Send 'r' to recieve a message
6. See the serial monitor


Components:

1. Arduino board
2. GSM module
3. Jumper wires
4. Breadboard
5. SIM card

*/


#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10); // RX, TX

void setup(){
    mySerial.begin(9600); // set up Serial library at 9600 bps
    Serial.begin(9600); // set up Serial library at 9600 bps
    delay(1000);

}

void loop(){
    if(Serial.available()){
        switch (Serial.read()
        {
        case 's':
        SendMessage();
            break;
        case 'r':
        RecieveMessage();
            break;
        default:
            break;
        }
    }
    if(mySerial.available()){
        Serial.write(mySerial.read());
    }
}

void SendMessage(){
    mySerial.println("AT+CMGF=1"); // set SMS mode to text
    delay(1000);
    mySerial.println("AT+CMGS=\"+94719414139\"\r"); // set the phone number
    delay(1000);
    mySerial.printlm("Hi! I'm Sasanka"); // send the message
    delay(1000);
    mySerial.write(26); // send the ASCII code of CTRL+Z
    delay(1000);

}

void RecieveMessage(){
    
    mySerial.println("AT+CMGR=2,2,0,0,0"); // AT command to recieve the message
    delay(1000);
}