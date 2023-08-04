#ifndef __STATOR_H__
#define __STATOR_H__

#include <iostream>
#include <memory>
#include "Vaned.h"

class Machine;

class Stator : public Vaned
{
public:
  Stator(std::shared_ptr<Machine> m);
  ~Stator();

private:

protected:

public:

};

class AxCStator : public Stator
{
public:
  AxCStator(std::shared_ptr<Machine> m);
  ~AxCStator();

private:

public:

};

class AxTStator : public Stator
{
public:
  AxTStator(std::shared_ptr<Machine> m);
  ~AxTStator();

private:

public:
  
};

#endif // __STATOR_H__