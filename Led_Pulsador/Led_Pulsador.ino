
bool estado=0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(4, INPUT_PULLUP);
}

void loop()
{
  int lectura = digitalRead(4);
  
  if (lectura == LOW)
  {
    delay(500);
    estado= !estado;
  }
  if (estado == 0)
  {
   digitalWrite(13, LOW); 
  }
  else
  {
    digitalWrite(13, HIGH); 
  } 
}
