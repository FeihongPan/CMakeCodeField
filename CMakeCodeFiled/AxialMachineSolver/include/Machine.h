#ifndef __MACHINE_H__
#define __MACHINE_H__

class Stage;
class Stage_comp_axial;
class Stage_turb_axial;

class Machine
{
public:
  Machine();
  ~Machine();
  
private:
  
public:
  int MachineType; // 0:axial Turbine 1:axial Compressor
};

#endif // __MACHINE_H__