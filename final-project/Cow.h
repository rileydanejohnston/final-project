// Riley Johnston
// CS137
// Final project


#ifndef COW_H
#define COW_H

#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Cow : public Animal {
private:
    double avgMilkOutput;
    double costPerGal;
    double pricePerGal;
    
    double totalGallons;
public:
    Cow(double = 0.0, double = 0.0, double = 0.0, double = 0.0, string = "Alex", double = 0.0, string = "Cow");
    
    
    Cow& setAvgMilkOutput(double);
    Cow& setCostPerGal(double);     // validate
    Cow& setPricePerGal(double);    // validate
    Cow& setTotalGal(double);
    
    double getAvgMilkOutput() const;
    double getCostPerGal() const;
    double getPricePerGal() const;
    double getTotalGal() const;
    
    virtual void produce(int = 1);
};

#endif
