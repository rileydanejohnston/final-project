// Riley Johnston
// CS137
// Final project

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
    
private:
    string animal;
    double age;
    double weight;
    
public:
    Animal(const string& = "Cow",
           double = 0.0,
           double = 0.0      );
    
    Animal& setAnimal(const string&);
    Animal& setAge(double);
    Animal& setWeight(double);
    
    string getAnimal() const;
    double getAge() const;
    double getWeight() const;
    
    void display() const;
};

#endif
