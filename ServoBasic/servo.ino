#include <Servo.h>
Servo servoMeca;

void setup() {
  servoMeca.attach(3);
  servoMeca.write(0);
}

void loop() {
  for (int i=0; i<=180; i=i+10)
  {
  servoMeca.write(i);
  delay(1000);
  }
  for (int i=180; i>0; i=i-10)
  {
  servoMeca.write(i);
  delay(1000);
  }
}
