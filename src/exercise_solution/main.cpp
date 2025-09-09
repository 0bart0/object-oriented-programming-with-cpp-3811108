#include "thermostat.h"

int main()
{
  Thermostat livingRoomThermostat(22.5, 1, "Living Room");

  livingRoomThermostat.displayStatus();

  return 0;
}