// Riley Johnston
// CS137
// Final project


#ifndef COW_H
#define COW_H

#include <iostream>
#include "FarmAnimal.h"
using namespace std;

class Cow : public FarmAnimal {
    
private:
    double totalGallons;
    
public:
    Cow(double = 0.0,
        const string& = "Cow",
        double = 0.0,
        double = 0.0,
        double = 0.0,
        double = 0.0,
        double = 0.0        );
    virtual ~Cow() = default;       // marking virtual for clarity
    
    Cow& setTotalGallons(double);
    
    double getTotalGallons() const;
    
    virtual double calcRevenue() const;
    virtual double calcCost() const;
    virtual double calcProfit() const;
    
    virtual void display() const;
};

#endif
