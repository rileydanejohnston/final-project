// Riley Johnston
// CS137
// Final project

#ifndef APPLETREE_H
#define APPLETREE_H

#include "Crop.h"
#include <iostream>
using namespace std;

class AppleTree : public Crop {
    
private:
    double lbsPerUnit;
    double lbsApples;
public:
    AppleTree(double = 0.0,
              double  = 0.0,
              
              const string& = "Corn",
              double = 0.0,
              double = 0.0  );
    
    AppleTree& setLbsPerUnit(double);
    AppleTree& setLbsApples(double);
    
    double getLbsPerUnit() const;
    double getLbsApples() const;
    
    int calcUnits() const;
    double calcCostTotal() const;
    double calcRevenueTotal() const;
    double calcProfitTotal() const;
    
    virtual void display() const;
};

#endif
