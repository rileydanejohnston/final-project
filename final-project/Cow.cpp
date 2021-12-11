// Riley Johnston
// CS137
// Final project


#include "Cow.h"
#include <iomanip>

Cow::Cow(double totalGal,
         const string &anml,
         double years,
         double lbs,
         double cost,
         double revenue,
         double numPerDay       )
:FarmAnimal(anml, years, lbs, cost, revenue, numPerDay)
{
    setTotalGallons(totalGal);
}

Cow& Cow::setTotalGallons(double totalGal){
    totalGallons = (totalGal >= 0.0 && totalGal <= 15000.0) ? totalGal : 0.0;
    return *this;
}

double Cow::getTotalGallons() const
{
    return totalGallons;
}

double Cow::calcRevenue() const
{
    return FarmAnimal::calcRevenue() +  (getTotalGallons() * FarmAnimal::getRevenuePerUnit());
}

double Cow::calcCost() const
{
    return FarmAnimal::calcCost() +  (getTotalGallons() * FarmAnimal::getCostPerUnit());
}

double Cow::calcProfit() const
{
    return calcRevenue() - calcCost();
}

void Cow::display() const {
    FarmAnimal::display();
    cout      <<
    setw(10)  << getTotalGallons() << "\t" <<
    setw(11)  << calcRevenue() << "\t" <<
    setw(10)  << calcCost() << "\t" <<
    setw(10)  << calcProfit() << "\t" << endl;
}
