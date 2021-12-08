// Riley Johnston
// CS137
// Final project

#ifndef CORN_H
#define CORN_H

#include "Crop.h"
#include <iostream>
using namespace std;

class Corn : public Crop {
    
private:
    double squareAcres;
public:
    Corn(double  = 0.0,
         
         const string& = "Corn",
         double = 0.0,
         double = 0.0       );
    
    Corn& setSquareAcres(double);
    double getSquareAcres() const;
    
    double calcCostTotal() const;
    double calcRevenueTotal() const;
    double calcProfitTotal() const;
    
    // virtual void produce(int = 1);
    virtual void display() const;
};

#endif
