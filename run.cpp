#include "run.h"
void onOffLED(int pin, int tt, int tg)
{
  digitalWrite(pin, tt);
  delay(tg);
}