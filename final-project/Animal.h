// Riley Johnston
// CS137
// Final project

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <iostream>
using namespace std;

class Animal {
    friend ostream operator<<(ostream&, const Animal&);
private:
    double age;
    string animal;
    // age?
    
public:
    Animal(double = 0.0, string = "Cow");
    
    Animal& setAge(double years);
    Animal& setAnimal(string anml);
    
    double getAge() const;
    string getAnimal() const;
};
#endif
