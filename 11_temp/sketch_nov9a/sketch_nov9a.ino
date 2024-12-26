#include <NanitLib.h>
#include <DHT.h>

DHT dht(P3_2, DHT11);

void setup() {
  Nanit_Base_Start();  
  dht.begin();
  Serial.begin(9600);     
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  Serial.println("Temp: " + String(t));
  Serial.println("HUMD: " + String(h));
  
  delay(100);
}