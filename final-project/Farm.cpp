// Riley Johnston
// CS137
// Final project

#include "Farm.h"

Farm::Farm(const Farmer &farmer):
headFarmer(farmer)
{
    setRevenue(0.0).
    setCost(0.0);
}

/*
Farm::Farm(const Farm &farmToCopy)
{
    
}
*/

Farm::~Farm()
{
    for (int i = 0; i < getAnimalSize(); ++i)
    {
        delete animals[i];
    }
}

Farm& Farm::setRevenue(double rev)
{
    revenue = rev;
    return *this;
}

Farm& Farm::setCost(double cst)
{
    cost = cst;
    return *this;
}

double Farm::getRevenue() const
{
    return revenue;
}

double Farm::getCost() const
{
    return cost;
}

double Farm::calcProfit() const
{
    return getRevenue() - getCost();
}

/*
template <typename T>
void Farm::addAnimal(const T &anml)
{
    animals.push_back(&anml);
}
*/

void Farm::addChicken(const Chicken& newChicken)
{
    animals.push_back(&newChicken);
}

void Farm::addCow(const Cow& newCow)
{
    animals.push_back(&newCow);
}

bool Farm::removeAnimal(int index)
{
    // input is invalid
    if (index < 1 || index > getAnimalSize())
    {
        return false;
    }
    
    animals.erase(animals.begin() + (index - 1));
    return true;
}

unsigned long Farm::getAnimalSize() const
{
    return animals.size();
}

void Farm::deleteAnimalList() const
{
    for (int i = 0; i < getAnimalSize(); ++i)
    {
        cout << i + 1 << ") " << animals[i]->getFarmAnimal() << endl;
    }
}

void Farm::displayAnimals() const
{
    for (int i = 0; i < getAnimalSize(); ++i)
    {
        animals[i]->display();
    }
}
