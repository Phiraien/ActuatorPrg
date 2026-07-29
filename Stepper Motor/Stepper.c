#include<Stepper.h>
const int stpr=2;
Stepper myStepper=Stepper(stpr,8,9,10,11);


void setup()
{
  myStepper.setSpeed(2048);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("clockwise");
 //myStepper.step(stpr);
  delay(500);
  
  Serial.println("counterclockwise");
//  myStepper.step(-stpr);
  delay(3000);
}
