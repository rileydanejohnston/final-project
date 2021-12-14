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
    
    harvestCounter = 0;
    produceCounter = 0;
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

ostream& operator<<(ostream& output, const Farm &right)
{
    output << fixed << setprecision(2) << endl;
    output << right.headFarmer << endl;
    output << endl;
    for (int i = 0; i < right.getAnimalSize(); ++i)
    {
        output << *right.animals[i] << endl;
    }
    
    for (int i = 0; i < right.getCropSize(); ++i)
    {
        output << *right.crops[i] << endl;
    }
    
    output << endl;
    output << "Years"          << setw(27) << right.getProduceCounter() << endl;
    output << "Animal revenue" << setw(22) << right.getAnimalRevenue() << endl;
    output << "Animal cost"    << setw(25) << right.getAnimalCost()    << endl;
    output << "Animal profit"  << setw(23) << right.calcAnimalProfit() << endl;
    output << endl;
    output << "Harvests"       << setw(24) << right.getHarvestCounter() << endl;
    output << "Crop revenue"   << setw(24) << right.getCropRevenue() << endl;
    output << "Crop cost"      << setw(27) << right.getCropCost()    << endl;
    output << "Crop profit"    << setw(25) << right.calcCropProfit() << endl;
    output << "-------------------------------------------" << endl;
    output << "Total revenue"  << setw(23) << right.getTotalRevenue() << endl;
    output << "Total cost"     << setw(26) << right.getTotalCost()    << endl;
    output << "Total profit"   << setw(24) << right.calcTotalProfit();
    
    return output;
}

void Farm::incrementProduceCounter()
{
    ++produceCounter;
}

void Farm::incrementHarvestCounter()
{
    ++harvestCounter;
}

void Farm::updateFarmTotals()
{
    setTotalRevenue( getTotalRevenue() + getAnimalRevenue() + getCropRevenue() );
    setTotalCost( getTotalCost() + getAnimalCost() + getCropCost() );
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

int Farm::getProduceCounter() const
{
    return produceCounter;
}

int Farm::getHarvestCounter() const
{
    return harvestCounter;
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

void Farm::displayFarmer() const
{
    headFarmer.display();
}

void Farm::displayFarmFigures() const
{
    cout << endl;
    cout << "Years"          << setw(27) << getProduceCounter() << endl;
    cout << "Animal revenue" << setw(18) << getAnimalRevenue() << endl;
    cout << "Animal cost"    << setw(21) << getAnimalCost()    << endl;
    cout << "Animal profit"  << setw(19) << calcAnimalProfit() << endl;
    cout << endl;
    cout << "Harvests"       << setw(24) << getHarvestCounter() << endl;
    cout << "Crop revenue"   << setw(20) << getCropRevenue() << endl;
    cout << "Crop cost"      << setw(23) << getCropCost()    << endl;
    cout << "Crop profit"    << setw(21) << calcCropProfit() << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Total revenue"  << setw(19) << getTotalRevenue() << endl;
    cout << "Total cost"     << setw(22) << getTotalCost()    << endl;
    cout << "Total profit"   << setw(20) << calcTotalProfit() << endl;
}

void Farm::displayEntireFarm() const
{
    displayFarmer();
    displayAnimals();
    displayCrops();
    displayFarmFigures();
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
    
    setAnimalRevenue( revSum );
    setAnimalCost( costSum );
    
    incrementProduceCounter();
    updateFarmTotals();
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
    
    incrementHarvestCounter();
    updateFarmTotals();
}
