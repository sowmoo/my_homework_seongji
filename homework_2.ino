#include <Wire.h>

#define ADDRESS_SLAVE 4
byte count = 0;


void setup()
{
  Wire.begin(ADDRESS_SLAVE);
  Wire.onRequest(slave_report);
}

void loop()
{
  
}

void slave_report()
{
  Wire.write(count++);
}
