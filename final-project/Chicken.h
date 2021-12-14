// Riley Johnston
// CS137
// Final project


#ifndef CHICKEN_H
#define CHICKEN_H

#include "FarmAnimal.h"
#include <iostream>
using namespace std;

class Chicken : public FarmAnimal {
    friend ostream& operator<<(ostream&, const Chicken&);
private:
    int eggsPerDay;
    int eggsPerUnit;
    const string ANIMAL = "Chicken";
public:
    Chicken(int = 12,
            const string& = "ID-1",
            double = 0.0,
            double = 0.0,
            double = 0.0,
            double = 0.0,
            double = 0.0        );
    
    Chicken& setEggsPerUnit(int);       // 12 eggs per dozen. You wouldn't sell a single egg
    
    int getEggsPerUnit() const;
    int getYearProduction() const;
    string getAnimal() const;
    
    int calcUnits() const;
    
    virtual double calcRevenue() const;
    virtual double calcCost() const;
    virtual double calcProfit() const;
    
    virtual void display() const;
};

#endif
