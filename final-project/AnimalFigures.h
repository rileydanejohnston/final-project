// Riley Johnston
// CS137
// Final project

#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class AnimalFigures : public Animal {
    
private:
    double costPerUnit;
    double revenuePerUnit;   // avg goods produced per day
    // change to template?
public:
    AnimalFigures(const string& = "Cow",
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0    );
 
    AnimalFigures& setCostPerUnit(double);
    AnimalFigures& setRevenuePerUnit(double);
    
    double getCostPerUnit() const;
    double getRevenuePerUnit() const;
    
    // virtual void produce(int) = 0;
    double calcProfitPerUnit() const;
    virtual void display() const;
};
#endif
