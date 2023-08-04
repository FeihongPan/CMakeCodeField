#ifndef __ROTOR_H__
#define __ROTOR_H__

#include <iostream>
#include <memory>
#include "Vaned.h"
class Machine;

class Rotor : public Vaned
{
public:
  Rotor(std::shared_ptr<Machine> m);
  ~Rotor();
    
private:
  
protected:

public:

};

class AxTRotor : public Rotor
{
public:
  AxTRotor(std::shared_ptr<Machine> m);
  ~AxTRotor();
    
private:
  
public:

};

class AxCRotor : public Rotor
{
public:
  AxCRotor(std::shared_ptr<Machine> m);
  ~AxCRotor();
    
private:
  
public:

};

#endif // __ROTOR_H__