#include "..\include\Fluid.h"

Fluid::Fluid(std::shared_ptr<Machine> m) : pMachine(m)
{
  Rgas = 287.15;
  Gamma = 1.4;
}

Fluid::~Fluid()
{

}
