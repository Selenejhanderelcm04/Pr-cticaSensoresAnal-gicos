//
const int led=4;
void setup()
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int analogico= analogRead(A0);
  Serial.println(analogico);
  if (analogico<=500)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
