// Riley Johnston
// CS137
// Final project

#ifndef CROP_H
#define CROP_H

#include <iostream>
#include <string>
using namespace std;

class Crop {
    friend ostream& operator<<(ostream&, const Crop&);
private:
    string cropId;
    double costPerUnit;
    double revenuePerUnit;
    double totalUnits;
public:
    Crop(const string& = "ID-1",
         double = 0.0,
         double = 0.0,
         double = 0.0       );
    virtual ~Crop() = default;
    
    Crop& setCropId(const string&);
    Crop& setCostPerUnit(double);
    Crop& setRevenuePerUnit(double);
    
    // lbs for trees, acres for corn
    Crop& setTotalUnits(double);
    
    string getCropId() const;
    double getCostPerUnit() const;
    double getRevenuePerUnit() const;
    double getTotalUnits() const;
    
    virtual double calcRevenue() const;
    virtual double calcCost() const;
    virtual double calcProfit() const;
    
    virtual void display() const;
    
};

#endif
