#include <dht.h>
dht DHT;
int temp_sensor = 10;

void setup(){
  Serial.begin(9600);
}

void loop(){
  DHT.read11(temp_sensor);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(2000);
}
