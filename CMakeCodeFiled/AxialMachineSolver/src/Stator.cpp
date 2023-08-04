#include "..\include\Stator.h"
#include "..\include\Vaned.h"

Stator::Stator(std::shared_ptr<Machine> m) : Vaned(m)
{
  
}

Stator::~Stator()
{

}

// Stator for axial Turbine
AxTStator::AxTStator(std::shared_ptr<Machine> m) : Stator(m)
{

}

AxTStator::~AxTStator()
{

}

// Stator for axial Compressor
AxCStator::AxCStator(std::shared_ptr<Machine> m) : Stator(m)
{

}

AxCStator::~AxCStator()
{

}