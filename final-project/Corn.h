// Riley Johnston
// CS137
// Final project

#ifndef CORN_H
#define CORN_H

#include "Crop.h"
#include <iostream>
using namespace std;

class Corn : public Crop {
    
private:
    // corn will be sold in bushels
    // 1 acre = ~174.8 bushels
    const double BUSHELS_PER_ACRE = 174.8;
    const string cropType = "Corn";
public:
    Corn(const string& = "Field 1",
         double = 0.0,
         double = 0.0,
         double = 0.0       );
    
    double getBushelsPerAcre() const;
    string getCropType() const;
    int calcTotalBushels() const;
    
    double calcCost() const;
    double calcRevenue() const;
    double calcProfit() const;
    
    // virtual void produce(int = 1);
    virtual void display() const;
};

#endif
