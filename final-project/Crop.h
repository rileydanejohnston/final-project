// Riley Johnston
// CS137
// Final project

#ifndef CROP_H
#define CROP_H

#include <iostream>
#include <string>
using namespace std;

class Crop {
    
private:
    string cropType;
    double costPerUnit;
    double revenuePerUnit;
    double totalUnits;
public:
    Crop(const string& = "Corn",
         double = 0.0,
         double = 0.0,
         double = 0.0       );
    
    Crop& setCropType(const string&);
    Crop& setCostPerUnit(double);
    Crop& setRevenuePerUnit(double);
    
    // lbs for trees, acres for corn
    Crop& setTotalUnits(double);
    
    string getCropType() const;
    double getCostPerUnit() const;
    double getRevenuePerUnit() const;
    double getTotalUnits() const;
    
    virtual double calcRevenue() const;
    virtual double calcCost() const;
    virtual double calcProfit() const;
    
    virtual void display() const;
    
};

#endif
