// Riley Johnston
// CS137
// Final project

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class FarmAnimal {
    friend ostream& operator<<(ostream&, const FarmAnimal&);
private:
    string id;
    double age;
    double weight;
    double costPerUnit;
    double revenuePerUnit;
    double averagePerDay;
    
public:
    FarmAnimal(const string& = "ID-1",
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0         );
    
    FarmAnimal& setId(const string&);
    FarmAnimal& setAge(double);
    FarmAnimal& setWeight(double);
    FarmAnimal& setCostPerUnit(double);
    FarmAnimal& setRevenuePerUnit(double);
    FarmAnimal& setAveragePerDay(double);
    
    string getId() const;
    double getAge() const;
    double getWeight() const;
    double getCostPerUnit() const;
    double getRevenuePerUnit() const;
    double getAveragePerDay() const;
    double calcYearProduction() const;
    
    virtual double calcRevenue() const;
    virtual double calcCost() const;
    virtual double calcProfit() const;
    
    virtual void display() const;
};

#endif
