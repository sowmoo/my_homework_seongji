#include <Wire.h>

#define ADDRESS_SLAVE 4

void setup()
{
  Wire.begin();
}

void loop()
{
  Wire.beginTransmission(ADDRESS_SLAVE);
  Wire.write("Hi~");
  Wire.endTransmission();
  delay(500);
}
