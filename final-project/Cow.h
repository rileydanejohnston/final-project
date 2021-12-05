// Riley Johnston
// CS137
// Final project


#ifndef COW_H
#define COW_H

#include <iostream>
#include "AnimalFigures.h"
using namespace std;

class Cow : public AnimalFigures {
    
private:
    double gallonsPerDay;
    double totalGallons;
    
public:
    Cow(double = 0.0,
        double = 0.0,
        const string& = "Cow",
        double = 0.0,
        double = 0.0,
        double = 0.0,
        double = 0.0        );
    
    Cow& setGallonsPerDay(double);
    Cow& setTotalGallons(double);
    
    double getGallonsPerDay() const;
    double getTotalGallons() const;
    
    virtual void display() const;
};

#endif
