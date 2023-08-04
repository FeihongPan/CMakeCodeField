#include "..\include\Stage.h"
#include "..\include\Vaned.h"
#include "..\include\Machine.h"

Stage::Stage(std::shared_ptr<Machine> m) : pMachine(m)
{

}

Stage::~Stage()
{
  
}


// Stage of axial Machine for Turbine
Stage_turb_axial::Stage_turb_axial(std::shared_ptr<Machine> m) : Stage(m)
{
}

Stage_turb_axial::~Stage_turb_axial()
{

}


// Stage of axial Machine for Compressor
Stage_comp_axial::Stage_comp_axial(std::shared_ptr<Machine> m) : Stage(m)
{
}

Stage_comp_axial::~Stage_comp_axial()
{

}
