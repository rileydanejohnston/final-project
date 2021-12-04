// Riley Johnston
// CS137
// Final project
#include "Animal.h"
#include "FarmAnimal.h"
#include <iomanip>

FarmAnimal::FarmAnimal(const string &anml,
                       double years,
                       double lbs,
                       double cost,
                       double revenue,
                       double total     )
:Animal(anml, years, lbs)
{
    setCostGoods(cost).
    setRevenueGoods(revenue).
    setTotalGoods(total);
}

FarmAnimal& FarmAnimal::setCostGoods(double cost){
    // figure out validation
    costGoods = (cost >= 0.0 && cost <= 25.0) ? cost : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setRevenueGoods(double price){
    // figure out validation
    revenueGoods = (price >= 0.0 && price <= 25.0) ? price : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setTotalGoods(double total){
    // figure out validation
    totalGoods = (total >= 0.0 && total <= 15000.0) ? total : 0.0;
    return *this;
}

double FarmAnimal::getCostGoods() const
{
    return costGoods;
}

double FarmAnimal::getRevenueGoods() const
{
    return revenueGoods;
}

double FarmAnimal::getTotalGoods() const
{
    return totalGoods;
}

void FarmAnimal::display() const {
    Animal::display();
    cout <<
    setw(6)  << getCostGoods() << "\t" <<
    setw(6)  << getRevenueGoods() << "\t" <<
    setw(6)  << getTotalGoods() << "\t";
}
