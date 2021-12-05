// Riley Johnston
// CS137
// Final project

#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class FarmAnimal : public Animal {
    
private:
    double totalGoods;
    double costGoods;
    double revenueGoods;
    double avgPerDay;       // avg goods produced per day
    // change to template?
public:
    FarmAnimal(const string& = "Cow",
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0     );
 
    FarmAnimal& setTotalGoods(double);
    FarmAnimal& setCostGoods(double);
    FarmAnimal& setRevenueGoods(double);
    FarmAnimal& setAvgPerDay(double);
    
    double getTotalGoods() const;
    double getCostGoods() const;
    double getRevenueGoods() const;
    double getAvgPerDay() const;
    
    // virtual void produce(int) = 0;
    virtual void display() const;
};
#endif
