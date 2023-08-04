#include "..\include\Rotor.h"

Rotor::Rotor(std::shared_ptr<Machine> m) : Vaned(m)
{
  
}

Rotor::~Rotor()
{

}

// Rotor for axial Turbine
AxTRotor::AxTRotor(std::shared_ptr<Machine> m) : Rotor(m)
{

}

AxTRotor::~AxTRotor()
{
  
}

// Rotor for axial Compressor
AxCRotor::AxCRotor(std::shared_ptr<Machine> m) : Rotor(m)
{

}

AxCRotor::~AxCRotor()
{
  
}