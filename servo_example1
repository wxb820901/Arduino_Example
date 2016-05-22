/*
BOM:
LEONARDO
any DC ster motor

function:
use serial control dgree of DC motor
my DC moter degree is not concise
*/
#include <Servo.h>
Servo myservo; 
int incomingByte = 0;
void setup() {
  myservo.attach(9); 
  Serial.begin(9600);
}
void loop() {    
  if (Serial.available() > 0) {
    incomingByte = Serial.parseInt();//from 0 to 180
    Serial.print(incomingByte);
    Serial.println("end");
  }
  myservo.write(incomingByte);
}
