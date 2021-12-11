// Riley Johnston
// CS137
// Final project

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class FarmAnimal {
    
private:
    string animal;
    double age;
    double weight;
    double costPerUnit;
    double revenuePerUnit;
    double averagePerDay;
    
public:
    FarmAnimal(const string& = "Cow",
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0         );
    virtual ~FarmAnimal() = default;
    
    FarmAnimal& setFarmAnimal(const string&);
    FarmAnimal& setAge(double);
    FarmAnimal& setWeight(double);
    FarmAnimal& setCostPerUnit(double);
    FarmAnimal& setRevenuePerUnit(double);
    FarmAnimal& setAveragePerDay(double);
    
    string getFarmAnimal() const;
    double getAge() const;
    double getWeight() const;
    double getCostPerUnit() const;
    double getRevenuePerUnit() const;
    double getAveragePerDay() const;
    
    virtual double calcRevenue() const;
    virtual double calcCost() const;
    virtual double calcProfit() const;
    
    // produce will just be for 1 year
    virtual double produce() const;
    virtual void display() const;
};

#endif
