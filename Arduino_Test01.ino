#include "Led.h"

Led led(13);

void setup()
{
}

void loop()
{
  led.on();
  delay(100);
  led.off();
  delay(100);
}
