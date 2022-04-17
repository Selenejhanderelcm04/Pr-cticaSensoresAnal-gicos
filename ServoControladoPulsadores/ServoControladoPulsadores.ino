#include <Servo.h>
int pos_in=0;
int pos_max=5;
int pos_mov=11;
int pos = 0;
Servo servo_9;
void setup()
{
  pinMode(pos_in, INPUT_PULLUP);
  pinMode(pos_max, INPUT_PULLUP);
  pinMode(pos_mov, INPUT_PULLUP);
  servo_9.attach(9);
  servo_9.write(0);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(pos_in)== LOW){
  servo_9.write(0); 
  }
  if(digitalRead(pos_max)== LOW){
  servo_9.write(180); 
  }
  if(digitalRead(pos_mov)== LOW){
    for (pos = 20; pos <= 90; pos += 10) {
    servo_9.write(pos);
    delay(1000); 
    servo_9.write(pos-10);
    delay(1000); 
    Serial.println(pos);
    Serial.println(pos-10);
  }
  }
}
