// Riley Johnston
// CS137
// Final project


#include "Cow.h"
#include <iomanip>

Cow::Cow(double gal,
         double totalGal,
         const string &anml,
         double years,
         double lbs,
         double cost,
         double revenue     )
:FarmAnimal(anml, years, lbs, cost, revenue)
{
    setGallonsPerDay(gal).
    setTotalGallons(totalGal);
}

Cow& Cow::setGallonsPerDay(double gal){
    gallonsPerDay = (gal >= 0.0 && gal <= 25.0) ? gal : 0.0;
    return *this;
}

Cow& Cow::setTotalGallons(double totalGal){
    totalGallons = (totalGal >= 0.0 && totalGal <= 15000.0) ? totalGal : 0.0;
    return *this;
}

double Cow::getGallonsPerDay() const {
    return gallonsPerDay;
}

double Cow::getTotalGallons() const
{
    return totalGallons;
}

double Cow::calcRevenue() const
{
    return FarmAnimal::getRevenuePerUnit() * getTotalGallons();
}

double Cow::calcCost() const
{
    return FarmAnimal::getCostPerUnit() * getTotalGallons();
}

double Cow::calcProfit() const
{
    return FarmAnimal::getCostPerUnit() * getTotalGallons();
}

void Cow::produce(int days){
    setTotalGallons(getTotalGallons() + (days * getGallonsPerDay()));
}

void Cow::display() const {
    FarmAnimal::display();
    cout      <<
    setw(10)  << getTotalGallons() << "\t" <<
    setw(11)  << calcRevenue() << "\t" <<
    setw(10)  << calcCost() << "\t" <<
    setw(10)  << calcProfit() << "\t" << endl;
}
