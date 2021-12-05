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
                       double total,
                       double avg       )
:Animal(anml, years, lbs)
{
    setCostGoods(cost).
    setRevenueGoods(revenue).
    setTotalGoods(total).
    setAvgPerDay(avg);
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

FarmAnimal& FarmAnimal::setAvgPerDay(double avg){
    // 6-7 gallons per day is avg
    avgPerDay = (avg >= 0.0 && avg <= 25.0) ? avg : 0.0;
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

double FarmAnimal::getAvgPerDay() const {
    return avgPerDay;
}

void FarmAnimal::display() const {
    Animal::display();
    cout <<
    setw(6)  << getCostGoods() << "\t" <<
    setw(6)  << getRevenueGoods() << "\t" <<
    setw(6)  << getTotalGoods() << "\t" <<
    setw(6)  << getTotalGoods() << "\t";
}
