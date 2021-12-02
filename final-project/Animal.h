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
    string name;
    
public:
    Animal(double = 0.0, string = "Cow", string = "Alex");
    
    Animal& setAge(double years);
    Animal& setAnimal(string anml);
    Animal& setName(string);
    
    double getAge() const;
    string getAnimal() const;
    string getName() const;
    
    virtual void produce(int) = 0;
};
#endif
