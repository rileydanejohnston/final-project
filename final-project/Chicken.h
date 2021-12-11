// Riley Johnston
// CS137
// Final project


#ifndef CHICKEN_H
#define CHICKEN_H

#include "FarmAnimal.h"
#include <iostream>
using namespace std;

class Chicken : public FarmAnimal {
private:
    int eggsPerDay;
    int eggsPerUnit;
    int totalEggs;
public:
    Chicken(int = 12,
            int = 0,
            const string& = "Cow",
            double = 0.0,
            double = 0.0,
            double = 0.0,
            double = 0.0,
            double = 0.0        );
    virtual ~Chicken() = default;    // marking virtual for clarity
    
    Chicken& setEggsPerUnit(int);       // 12 eggs per dozen. You wouldn't sell a single egg
    Chicken& setTotalEggs(int);
    
    int getEggsPerUnit() const;
    int getTotalEggs() const;
    
    int calcUnits() const;
    
    virtual double calcRevenue() const;
    virtual double calcCost() const;
    virtual double calcProfit() const;
    
    virtual void display() const;
};

#endif
