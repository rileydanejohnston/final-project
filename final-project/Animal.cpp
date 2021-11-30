// Riley Johnston
// CS137
// Final project

#include "Animal.h"

Animal::Animal(double years, string anml)
{
    setAge(years);
    setAnimal(anml);
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

double Animal::getAge() const
{
    return age;
}

string Animal::getAnimal() const
{
    return animal;
}
