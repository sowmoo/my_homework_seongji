#include <Wire.h>

#define ADDRESS_SLAVE 4

byte data;

void setup()
{
  Serial.begin(9600);
  Wire.begin();
}

void loop()
{
  Wire.requestFrom(ADDRESS_SLAVE,1);
  while(Wire.available())
  {
    data = Wire.read();
    Serial.println(data);
  }
  delay(1000);  
}
