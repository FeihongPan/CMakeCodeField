#ifndef __STAGE_H__
#define __STAGE_H__

#include <iostream>
#include <memory>
class Vaned;
class Stator;
class Rotor;
class Machine;

class Stage
{
public:
  Stage(std::shared_ptr<Machine> m = 0);
  ~Stage();

private:

protected:

public:
  std::shared_ptr<Machine> pMachine = nullptr;
  
};

// Stage of axial Machine for Turbine
class Stage_turb_axial : public Stage
{
public:
  Stage_turb_axial(std::shared_ptr<Machine> m = 0);
  ~Stage_turb_axial();
  
private:

public:

};

// Stage of axial Machine for Compressor
class Stage_comp_axial : public Stage
{
public:
  Stage_comp_axial(std::shared_ptr<Machine> m = 0);
  ~Stage_comp_axial();
    
private:
  
public:
  
};

#endif // __STAGE_H__