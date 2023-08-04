#include "..\include\Vaned.h"
#include "..\include\Stage.h"
#include "..\include\Machine.h"
#include <memory>

Vaned::Vaned(std::shared_ptr<Machine> m) : pMachine(m)
{
  if (pStage)
  {
    pStage = std::make_shared<Stage>();
  }
}

Vaned::~Vaned()
{

}
