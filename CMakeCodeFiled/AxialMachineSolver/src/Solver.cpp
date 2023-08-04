#include "..\include\Solver.h"
#include "..\include\Machine.h"
#include "..\include\Stage.h"
#include "..\include\Vaned.h"
#include <iostream>
#include <memory>

int main()
{
  auto errorCode = 0;
  auto solver = std::make_shared<Solver>();
  errorCode = solver->InputParameter();
  return errorCode;
}

Solver::Solver()
{
  printf ("Design axial Machine(Compressor or Turbine) Start!\n");
  pMachine = std::make_shared<Machine>();
}

Solver::~Solver()
{
  printf ("Design axial Machine(Compressor or Turbine) End!");
}

int Solver::DecideMachineType()
{
  auto errorCode = 0;
  printf ("Input 0: axial Turbine, Input 1: axial Compressor.\n");
  printf ("please choose your axial machine type: \n");
  auto& machinetype = pMachine->MachineType; 
  std::cin >> machinetype;
  while (1)
  {
    if (machinetype == 0)
    {
      printf("MachineType is Axial Turbine!\n");
      break;
    }
    else if (machinetype == 1)
    {
      printf("MachineType is Axial Compressor!\n");
      break;
    }
    else
    {
      printf("please input correct number!\n");
      std::cin >> machinetype;
    }
  }
  return errorCode;
}

int Solver::InputParameter()
{
  auto errorCode = 0;
  errorCode = DecideMachineType();

  return errorCode;
}