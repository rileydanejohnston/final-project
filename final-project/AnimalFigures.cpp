// Riley Johnston
// CS137
// Final project
#include "Animal.h"
#include "AnimalFigures.h"
#include <iomanip>

AnimalFigures::AnimalFigures(const string &anml,
                       double years,
                       double lbs,
                       double cost,
                       double revenue     )
:Animal(anml, years, lbs)
{
    setCostPerUnit(cost).
    setRevenuePerUnit(revenue);
}

AnimalFigures& AnimalFigures::setCostPerUnit(double cost){
    // figure out validation
    costPerUnit = (cost >= 0.0 && cost <= 25.0) ? cost : 0.0;
    return *this;
}

AnimalFigures& AnimalFigures::setRevenuePerUnit(double revenue){
    // figure out validation
    revenuePerUnit = (revenue >= 0.0 && revenue <= 25.0) ? revenue : 0.0;
    return *this;
}

double AnimalFigures::getCostPerUnit() const
{
    return costPerUnit;
}

double AnimalFigures::getRevenuePerUnit() const
{
    return revenuePerUnit;
}

double AnimalFigures::calcProfitPerUnit() const
{
    return getRevenuePerUnit() - getCostPerUnit();
}

void AnimalFigures::display() const {
    Animal::display();
    cout <<
    setw(6)  << getCostPerUnit() << "\t" <<
    setw(6)  << getRevenuePerUnit() << "\t" <<
    setw(6)  << calcProfitPerUnit() << "\t";
}
