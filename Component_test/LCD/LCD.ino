
/*

LCD 16x2 I2C test

This code is used to test the LCD 16x2 I2C	

method:

1. Connect the LCD 16x2 I2C to the arduino board
2. Connect the arduino board to the computer
3. The LCD should print "Hello World"

Components:

1. Arduino board
2. LCD 16x2 I2C
3. Jumper wires
4. Breadboard

*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(4,0);
    lcd.print("Hello");
    lcd.setCursor(4,1);
    lcd.print("World");
}

void loop(){

}
