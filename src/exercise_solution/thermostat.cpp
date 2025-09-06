#include "thermostat.h"

Thermostat::Thermostat(float t, unsigned int m, const std::string &loc)
{
  this->temperature = t;
  this->location = loc;
  this->mode = m;
}

Thermostat::~Thermostat()
{
  std::cout << "Thermostat in " << this->location << " is being destroyed.";
}

void Thermostat::displayStatus() const
{
  std::cout << "Location: " << this->location;
  std::cout << " Temperature: " << this->temperature;
  std::cout << " Mode: " << (this->mode == 0 ? "OFF" : mode == 1 ? "COOLING" : "HEATING") << std::endl;
}