// Riley Johnston
// CS137
// Final project

#ifndef CORN_H
#define CORN_H

#include "Crop.h"
#include <iostream>
using namespace std;

class Corn : public Crop {
    friend ostream& operator<<(ostream&, const Corn&);
private:
    // corn will be sold in bushels
    // 1 acre = ~174.8 bushels
    const double BUSHELS_PER_ACRE;
    const string CROP_TYPE = "Corn";
public:
    Corn(double = 174.8,
         const string& = "Field 1",
         double = 0.0,
         double = 0.0,
         double = 0.0       );
    virtual ~Corn() = default;
    
    double getBushelsPerAcre() const;
    string getCropType() const;
    int calcTotalBushels() const;
    
    virtual double calcCost() const;
    virtual double calcRevenue() const;
    virtual double calcProfit() const;
    
    // virtual void produce(int = 1);
    virtual void display() const;
};

#endif
