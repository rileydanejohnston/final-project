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
    string name;
    double avgMilkOutput;
    double costPerGal;
    double pricePerGal;
public:
    Cow(double = 0.0, double = 0.0, double = 0.0, double = 0.0, string = "Alex", double = 0.0, string = "Cow");
    
    Cow& setName(string);
    Cow& setAvgMilkOutput(double);
    Cow& setCostPerGal(double);     // validate
    Cow& setPricePerGal(double);    // validate
    
    string getName() const;
    double getAvgMilkOutput() const;
    double getCostPerGal() const;
    double getPricePerGal() const;
};

#endif
