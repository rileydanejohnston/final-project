// Riley Johnston
// CS137
// Final project


#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "AnimalFigures.h"
#include <iostream>
using namespace std;

class Chicken : public AnimalFigures {
private:
    int eggsPerDay;
    int eggsPerUnit;
    int totalEggs;
public:
    Chicken(int = 1,
            int = 12,
            int = 0,
            const string& = "Cow",
            double = 0.0,
            double = 0.0,
            double = 0.0,
            double = 0.0    );
    Chicken& setEggsPerDay(int);
    Chicken& setEggsPerUnit(int);       // 12 eggs per dozen. You wouldn't sell a single egg
    Chicken& setTotalEggs(int);
    
    int getEggsPerDay() const;
    int getEggsPerUnit() const;
    int getTotalEggs() const;
    
    void display() const;
};

#endif
