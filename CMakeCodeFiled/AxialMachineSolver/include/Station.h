#ifndef __STATION_H__
#define __STATION_H__

#include <iostream>
#include <memory>

class Machine;

class Station
{
public:
  Station(std::shared_ptr<Machine> m);
  ~Station();

private:
  std::shared_ptr<Machine> pMachine = nullptr;
public:
  
};

#endif // __STATION_H__