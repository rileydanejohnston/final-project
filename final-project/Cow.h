// Riley Johnston
// CS137
// Final project


#ifndef COW_H
#define COW_H

#include <iostream>
#include <string>
#include "FarmAnimal.h"
using namespace std;

class Cow : public FarmAnimal {
    
private:
    double avgMilkOutput;
    string name;
    
public:
    Cow(const string& = "Cow",
        const string& = "Alex",
        double = 0.0,
        double = 0.0,
        double = 0.0,
        double = 0.0,
        double = 0.0,
        double = 0.0        );
    
    Cow& setAvgMilkOutput(double);
    Cow& setName(const string&);
    
    double getAvgMilkOutput() const;
    string getName() const;
    
    virtual void display() const;
};

#endif
