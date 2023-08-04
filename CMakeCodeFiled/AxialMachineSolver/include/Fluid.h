#ifndef __FLUID_H__
#define __FLUID_H__

#include <iostream>
#include <memory>

class Machine;

class Fluid
{
public:
  Fluid(std::shared_ptr<Machine> m);
  ~Fluid();

private:
  std::shared_ptr<Machine> pMachine = nullptr;
public:
  double Rgas; // J/kgK
  double Gamma; 
};

#endif // __FLUID_H__