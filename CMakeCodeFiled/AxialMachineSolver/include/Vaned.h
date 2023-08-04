#ifndef __VANED_H__
#define __VANED_H__

#include <iostream>
#include <memory>

class Machine;
class Stage;

class Vaned
{
public:
  Vaned(std::shared_ptr<Machine> m);
  ~Vaned();

private:
  std::shared_ptr<Machine> pMachine = nullptr;
  std::shared_ptr<Stage> pStage = nullptr;

protected:
  
public:
  
};

#endif // __VANED_H__