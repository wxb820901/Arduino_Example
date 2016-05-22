/*
BOM:
LEONARDO
ULN2003APG 
28BYJ-48

function:
use serial (Ctrl+Shift+M) set how many steps go 
STEPS and stepper.setSpeed(n) are parameters set for running
*/
#include <Stepper.h>
#define STEPS 120
Stepper stepper(STEPS, 8, 9, 10, 11);
int incomingByte = 0;
void setup() {
  stepper.setSpeed(60);//<90
  Serial.begin(9600);
}
void loop() {
  incomingByte = 0;
  if (Serial.available() > 0) {
    incomingByte = Serial.parseInt();
    Serial.print(incomingByte);
    Serial.println("end");
  }
  stepper.step(incomingByte);
}
