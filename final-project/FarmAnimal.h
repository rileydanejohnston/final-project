// Riley Johnston
// CS137
// Final project

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <iostream>
using namespace std;

class FarmAnimal {
private:
    double age;
    string animal;
    string name;
    
    double totalGoods;
    double costGoods;
    double revenueGoods;
    
public:
    FarmAnimal(const string& = "Cow",
               const string& = "Alex",
               double = 0.0,
               double = 0.0,
               double = 0.0,
               double = 0.0     );
    
    
    FarmAnimal& setAnimal(const string&);
    FarmAnimal& setName(const string&);
    FarmAnimal& setAge(double);
    
    FarmAnimal& setTotalGoods(double);
    FarmAnimal& setCostGoods(double);
    FarmAnimal& setRevenueGoods(double);
    
    string getAnimal() const;
    string getName() const;
    
    double getTotalGoods() const;
    double getCostGoods() const;
    double getRevenueGoods() const;
    
    double getAge() const;
    
    
    // virtual void produce(int) = 0;
    virtual void display() const;
};
#endif
