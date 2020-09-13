#include <Wire.h>

#define ADDRESS_SLAVE 4

void setup()
{
  Wire.begin(ADDRESS_SLAVE);
  Wire.onReceive(request_event);
  Serial.begin(9600);
}

void loop()
{
  
}

void request_event()
{
  while(Wire.available())
  {
    Serial.println(Wire.read());
  }
}
