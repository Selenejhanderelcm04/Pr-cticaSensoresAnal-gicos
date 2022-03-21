void setup() {
  Serial.begin(9600);
}
void loop() {
  int temperatura=(analogRead(A0));
  float celsius=(temperatura*5)/1023.0*100;
  Serial.print(celsius);
  Serial.println(" °C");
  delay(1000);
}
