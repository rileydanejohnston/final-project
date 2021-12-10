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
    
    for (int i = 0; i < getCropSize(); ++i)
    {
        delete crops[i];
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

bool Farm::removeAnimal(int index)
{
    // input is invalid
    if (index < 1 || index > getAnimalSize())
    {
        return false;
    }
    
    // i'm not 100% on this. 
    delete animals[index - 1];
    animals.erase(animals.begin() + (index - 1));
    return true;
}

bool Farm::removeCrop(int index)
{
    // input is invalid
    if (index < 1 || index > getCropSize())
    {
        return false;
    }
    
    // i'm not 100% on this.
    delete crops[index - 1];
    crops.erase(crops.begin() + (index - 1));
    return true;
}

unsigned long Farm::getAnimalSize() const
{
    return animals.size();
}

unsigned long Farm::getCropSize() const
{
    return crops.size();
}

void Farm::deleteAnimalList() const
{
    for (int i = 0; i < getAnimalSize(); ++i)
    {
        cout << i + 1 << ") " << animals[i]->getFarmAnimal() << endl;
    }
}

void Farm::deleteCropList() const
{
    for (int i = 0; i < getCropSize(); ++i)
    {
        cout << i + 1 << ") " << crops[i]->getCropType() << endl;
    }
}

void Farm::displayAnimals() const
{
    for (int i = 0; i < getAnimalSize(); ++i)
    {
        animals[i]->display();
    }
}

void Farm::displayCrops() const
{
    for (int i = 0; i < getCropSize(); ++i)
    {
        crops[i]->display();
    }
}
