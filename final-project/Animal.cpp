// Riley Johnston
// CS137
// Final project

#include "Animal.h"

Animal::Animal(double years, string anml, string nm)
{
    setAge(years).
    setAnimal(anml).
    setName(nm);
    
}

Animal& Animal::setAge(double years)
{
    // really old farm animal age?
    age = (years >= 0 && years <= 50.0) ? years : 0.0;
    return *this;
}

Animal& Animal::setAnimal(string anml)
{
    animal = anml;
    return *this;
}

Animal& Animal::setName(string nm){
    name = nm;
    return *this;
}

double Animal::getAge() const
{
    return age;
}

string Animal::getAnimal() const
{
    return animal;
}

string Animal::getName() const {
    return name;
}

void Animal::display() const {
    cout << getAnimal() << "\t" << getName() << "\t" << getAge() << "\t";
}
