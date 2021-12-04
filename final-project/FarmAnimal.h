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
    
public:
    FarmAnimal(const string& = "Cow",
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0     );
 
    FarmAnimal& setTotalGoods(double);
    FarmAnimal& setCostGoods(double);
    FarmAnimal& setRevenueGoods(double);
    
    double getTotalGoods() const;
    double getCostGoods() const;
    double getRevenueGoods() const;
    
    // virtual void produce(int) = 0;
    virtual void display() const;
};
#endif
