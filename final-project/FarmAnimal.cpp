// Riley Johnston
// CS137
// Final project

#include "FarmAnimal.h"
#include <iomanip>

FarmAnimal::FarmAnimal(const string &anml,
               double years,
               double lbs,
               double cost,
               double revenue,
               double numPerDay     )
{
    setFarmAnimal(anml).
    setAge(years).
    setWeight(lbs).
    setCostPerUnit(cost).
    setRevenuePerUnit(revenue).
    setAveragePerDay(numPerDay);
}

FarmAnimal& FarmAnimal::setFarmAnimal(const string &anml)
{
    animal = anml;
    return *this;
}

FarmAnimal& FarmAnimal::setAge(double years)
{
    age = (years >= 0 && years <= 50.0) ? years : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setWeight(double lbs)
{
    weight = (lbs >= 0 && lbs <= 5000.0) ? lbs : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setCostPerUnit(double cost){
    // figure out validation
    costPerUnit = (cost >= 0.0 && cost <= 25.0) ? cost : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setRevenuePerUnit(double revenue){
    // figure out validation
    revenuePerUnit = (revenue >= 0.0 && revenue <= 25.0) ? revenue : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setAveragePerDay(double numPerDay)
{
    averagePerDay = (numPerDay >= 0 && numPerDay <= 50.0) ? numPerDay : 1;
    return *this;
}

string FarmAnimal::getFarmAnimal() const
{
    return animal;
}

double FarmAnimal::getAge() const
{
    return age;
}

double FarmAnimal::getWeight() const
{
    return weight;
}

double FarmAnimal::getCostPerUnit() const
{
    return costPerUnit;
}

double FarmAnimal::getRevenuePerUnit() const
{
    return revenuePerUnit;
}

double FarmAnimal::getAveragePerDay() const
{
    return averagePerDay;
}

double FarmAnimal::calcYearProduction() const
{
    return getAveragePerDay() * 365;
}

double FarmAnimal::calcRevenue() const
{
    return getRevenuePerUnit() * calcYearProduction();
}

double FarmAnimal::calcCost() const
{
    return getCostPerUnit() * calcYearProduction();
}

double FarmAnimal::calcProfit() const
{
    return calcRevenue() - calcCost();
}

void FarmAnimal::display() const {
    cout     << getFarmAnimal() << "\t" <<
    setw(11)  << getAge() << "\t" <<
    setw(10)  << getWeight() << "\t";
}
