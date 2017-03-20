#ifndef CIS_PARAMETERS_H
#define CIS_PARAMETERS_H

#include <vector>
#include <Rcpp.h>

#include "RadiusSolver.h"

class Parameters
{

protected:

    /* list of parameters from R */
    Rcpp::List mParams;

    /* calculate time increment based on provided parameters */
    virtual void CalculateTimeIncrement() = 0;

public:

    /* constructor */
    Parameters(Rcpp::List);

    /* return all parameters */
    Rcpp::List GetRparameters() {return mParams;}

    /* general model parameters */
    double initialNum()         {return mParams["initialNum"];}
    double runTime()            {return mParams["runTime"];}
    double density()            {return mParams["density"];}
    double boundary()           {return mParams["boundary"];}
    double randSeed()           {return mParams["randSeed"];}
    double syncCycles()         {return mParams["syncCycles"];}
    double outputIncrement()    {return mParams["outputIncrement"];}
    double recordIncrement()    {return mParams["recordIncrement"];}
    double timeIncrement()      {return mParams["timeIncrement"];}

    /* set the boundary to a numeric value */
    void setBoundary(double b) {mParams["boundary"] = b;}

    /* get a random cell type from initial distribution */
    Rcpp::S4* randomCellType();    

};

#endif
