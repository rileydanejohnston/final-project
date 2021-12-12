// Riley Johnston
// CS137
// Final project

#include "Farm.h"
#include <iomanip>

Farm::Farm(const Farmer &farmer):
headFarmer(farmer)
{
    setAnimalRevenue(0.0).
    setAnimalCost(0.0).
    setCropRevenue(0.0).
    setCropCost(0.0).
    setTotalRevenue(0.0).
    setTotalCost(0.0);
}

Farm::Farm(const Farm &farmToCopy):
headFarmer( farmToCopy.getHeadFarmerInst() )
{
    setAnimalRevenue( farmToCopy.getAnimalRevenue() ).
    setAnimalCost( farmToCopy.getAnimalCost() ).
    setCropRevenue( farmToCopy.getCropRevenue() ).
    setCropCost( farmToCopy.getCropCost() ).
    setTotalRevenue( farmToCopy.getTotalRevenue() ).
    setTotalCost(  farmToCopy.getTotalCost() );
    
    for (int i = 0; i < getAnimalSize(); ++i)
    {
        animals[i] = farmToCopy.animals[i];
    }
    
    for (int i = 0; i < getCropSize(); ++i)
    {
        crops[i] = farmToCopy.crops[i];
    }
}


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

Farm& Farm::setAnimalRevenue(double rev)
{
    animalRevenue = (rev >= 0) ? rev : 0.0;
    return *this;
}

Farm& Farm::setAnimalCost(double cst)
{
    animalCost = (cst >= 0) ? cst : 0.0;
    return *this;
}

Farm& Farm::setCropRevenue(double rev)
{
    cropRevenue = (rev >= 0) ? rev : 0.0;
    return *this;
}

Farm& Farm::setCropCost(double cst)
{
    cropCost = (cst >= 0) ? cst : 0.0;
    return *this;
}

Farm& Farm::setTotalRevenue(double rev)
{
    totalRevenue = (rev >= 0) ? rev : 0.0;
    return *this;
}

Farm& Farm::setTotalCost(double cst)
{
    totalCost = (cst >= 0) ? cst : 0.0;
    return *this;
}

double Farm::getAnimalRevenue() const
{
    return animalRevenue;
}

double Farm::getAnimalCost() const
{
    return animalCost;
}

double Farm::getCropRevenue() const
{
    return cropRevenue;
}

double Farm::getCropCost() const
{
    return cropCost;
}

double Farm::getTotalRevenue() const
{
    return totalRevenue;
}

double Farm::getTotalCost() const
{
    return totalCost;
}
            
Farmer Farm::getHeadFarmerInst() const
{
    return headFarmer;
}

double Farm::calcAnimalProfit() const
{
    return getAnimalRevenue() - getAnimalCost();
}

double Farm::calcCropProfit() const
{
    return getCropRevenue() - getCropCost();
}

double Farm::calcTotalProfit() const
{
    return getTotalRevenue() - getTotalCost();
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
        cout << i + 1 << ") " << animals[i]->getId() << endl;
    }
}

void Farm::deleteCropList() const
{
    for (int i = 0; i < getCropSize(); ++i)
    {
        cout << i + 1 << ") " << crops[i]->getCropId() << endl;
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

void Farm::produce()
{
    double revSum = 0.0;
    double costSum = 0.0;
    
    for (int i = 0; i < getAnimalSize(); ++i)
    {
        revSum += animals[i]->calcRevenue();
        costSum += animals[i]->calcCost();
    }
    
    // setAnimalRevenue( revSum + getAnimalRevenue() );
    // setAnimalCost( costSum + getAnimalCost() );
    
    setAnimalRevenue( revSum );
    setAnimalCost( costSum );
    
    updateFarmTotals();
    
    cout << "Animal revenue: " << getAnimalRevenue() << endl;
    cout << "Animal cost: " << getAnimalCost() << endl;
    cout << "Total revenue: " << getTotalRevenue() << endl;
    cout << "Total cost: " << getTotalCost() << endl;
}

void Farm::harvest()
{
    double revSum = 0.0;
    double costSum = 0.0;
    
    for (int i = 0; i < getCropSize(); ++i)
    {
        revSum += crops[i]->calcRevenue();
        costSum += crops[i]->calcCost();
    }
    
    setCropRevenue( revSum );
    setCropCost( costSum );
    
    updateFarmTotals();
    
    cout << fixed << setprecision(2) << "Crop revenue: " << getCropRevenue() << endl;
    cout << "Crop cost: " << getCropCost() << endl;
    cout << "Total revenue: " << getTotalRevenue() << endl;
    cout << "Total cost: " << getTotalCost() << endl;
}

void Farm::updateFarmTotals()
{
    setTotalRevenue( getTotalRevenue() + getAnimalRevenue() + getCropRevenue() );
    setTotalCost( getTotalCost() + getAnimalCost() + getCropCost() );
}
