// Riley Johnston
// CS137
// Final project


#ifndef COW_H
#define COW_H

#include <iostream>
#include "FarmAnimal.h"
using namespace std;

class Cow : public FarmAnimal {
    friend ostream& operator<<(ostream&, const Cow&);
private:
    // apparently milk is sold by the lb
    // 8.6 lbs = 1 gallon
    double lbsPerSaleUnit;
    const double LBS_PER_GALLON;
    const string ANIMAL = "Cow";
public:
    Cow(double = 0.0,
        double = 0.0,
        
        const string& = "ID-1",
        double = 0.0,
        double = 0.0,
        double = 0.0,
        double = 0.0,
        double = 0.0        );
    virtual ~Cow() = default;       // marking virtual for clarity
    
    Cow& setLbsPerSaleUnit(double);
    
    string getAnimal() const;
    double getLbsPerSaleUnit() const;
    double getLbsPerGallon() const;
    double getYearProduction() const;
    
    double calcTotalLbs() const;
    int calcTotalSaleUnits() const;
    
    virtual double calcRevenue() const;
    virtual double calcCost() const;
    virtual double calcProfit() const;
    
    virtual void display() const;
};

#endif
