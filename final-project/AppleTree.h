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
public:
    AppleTree(double = 0.0,
              
              const string& = "Corn",
              double  = 0.0,
              double = 0.0,
              double = 0.0  );
    
    AppleTree& setLbsPerUnit(double);
    
    double getLbsPerUnit() const;
    int calcUnits() const;
    
    virtual double calcCost() const;
    virtual double calcRevenue() const;
    virtual double calcProfit() const;
    
    virtual void display() const;
};

#endif
