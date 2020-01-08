// fdtdSC.h
//

#ifndef fdtdSC_h
#define fdtdSC_h

#include "classes.h"
#include "solver.h"

namespace Darius
{
  class FdTdSC : public Solver
  {
  public:
    FdTdSC (Mesh & mesh, Bunch & bunch, Seed & seed, std::vector <Undulator> & undulator, std::vector <ExtField> & extField, std::vector <FreeElectronLaser> & FEL);
    void solve ();
    void currentReset ();
    void currentUpdate ();
    void currentCommunicate ();
    void fieldUpdate ();
    void fieldEvaluate (long int m);
    void fieldSample ();
    void fieldVisualizeAllDomain (unsigned int ivtk);
    void fieldVisualizeInPlane (unsigned int ivtk);
    void fieldVisualizeInPlaneXNormal (unsigned int ivtk);
    void fieldVisualizeInPlaneYNormal (unsigned int ivtk);
    void fieldVisualizeInPlaneZNormal (unsigned int ivtk);
    void fieldProfile ();
  };
}
#endif
