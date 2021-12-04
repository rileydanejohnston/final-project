// Riley Johnston
// CS137
// Final project

#include "Animal.h"
#include <iomanip>

Animal::Animal(const string &anml, double years, double lbs)
{
    setAnimal(anml).
    setAge(years).
    setWeight(lbs);
}

Animal& Animal::setAnimal(const string &anml)
{
    animal = anml;
    return *this;
}

Animal& Animal::setAge(double years)
{
    age = (years >= 0 && years <= 50.0) ? years : 0.0;
    return *this;
}

Animal& Animal::setWeight(double lbs)
{
    weight = (lbs >= 0 && lbs <= 5000.0) ? lbs : 0.0;
    return *this;
}

string Animal::getAnimal() const
{
    return animal;
}

double Animal::getAge() const
{
    return age;
}

double Animal::getWeight() const
{
    return weight;
}

void Animal::display() const {
    cout     << getAnimal() << "\t" <<
    setw(6)  << getAge() << "\t" <<
    setw(6)  << getWeight() << "\t";
}
