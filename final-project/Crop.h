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
public:
    Crop(const string& = "Corn", double = 0.0, double = 0.0);
    
    Crop& setCropType(const string&);
    Crop& setCostPerUnit(double);
    Crop& setRevenuePerUnit(double);
    
    string getCropType() const;
    double getCostPerUnit() const;
    double getRevenuePerUnit() const;
    
    double calcProfitPerUnit() const;
    
    // virtual void produce(int = 1) = 0;
    virtual void display() const;
    
};

#endif
