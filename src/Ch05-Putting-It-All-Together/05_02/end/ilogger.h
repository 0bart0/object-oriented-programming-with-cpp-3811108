#ifndef ILOGGER_H
#define ILOGGER_H

#include <iostream>

class ILogger
{
public:
  virtual ~ILogger() = default;
  virtual void log(const std::string &message) = 0;
};

#endif