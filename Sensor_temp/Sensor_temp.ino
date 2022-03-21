#include <DHT.h>
#include <DHT_U.h>
#define Type DHT11
int dhtPin= 2;
DHT HT(dhtPin, Type);
float humidity;
float tempC;
float tempF;
int dt(500);
void setup(){
  Serial.begin(9600);
  HT.begin();
  }
void loop(){
  humidity=HT.readHumidity();
  Serial.println(humidity);
  delay(dt);
  }
