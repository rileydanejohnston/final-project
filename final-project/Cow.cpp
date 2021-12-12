// Riley Johnston
// CS137
// Final project


#include "Cow.h"
#include <iomanip>
#include <math.h>

Cow::Cow(double lbsSaleUnit,
         const string &identity,
         double years,
         double lbs,
         double cost,
         double revenue,
         double numPerDay       )
:FarmAnimal(identity, years, lbs, cost, revenue, numPerDay)
{
    setLbsPerSaleUnit(lbsSaleUnit);
}

Cow& Cow::setLbsPerSaleUnit(double lbsSaleUnit)
{
    lbsPerSaleUnit = (lbsSaleUnit >= 0.0 && lbsSaleUnit <= 250.0) ? lbsSaleUnit : 1.0;
    return *this;
}

string Cow::getAnimal() const
{
    return ANIMAL;
}

double Cow::getLbsPerSaleUnit() const
{
    return lbsPerSaleUnit;
}

double Cow::getLbsPerGallon() const
{
    return LBS_PER_GALLON;
}

double Cow::getYearProduction() const
{
    return FarmAnimal::calcYearProduction();
}

double Cow::calcTotalLbs() const
{
    return getYearProduction() * getLbsPerGallon();
}

int Cow::calcTotalSaleUnits() const
{
    return floor ( calcTotalLbs() / getLbsPerSaleUnit() );
}

double Cow::calcRevenue() const
{
    return calcTotalSaleUnits() * FarmAnimal::getRevenuePerUnit();
}

double Cow::calcCost() const
{
    return calcTotalSaleUnits() * FarmAnimal::getCostPerUnit();
}

double Cow::calcProfit() const
{
    return calcRevenue() - calcCost();
}

void Cow::display() const {
    cout << "Animal"               << setw(26) << getAnimal() << endl;
    cout << "------------------------------------" << endl;
    cout << "ID"                   << setw(30) << FarmAnimal::getId() << endl;
    cout << "Age"                  << setw(29) << FarmAnimal::getAge() << endl;
    cout << "Weight (lbs)"         << setw(20) << FarmAnimal::getWeight() << endl;
    cout << "Units per day"        << setw(19) << FarmAnimal::getAveragePerDay() << endl;
    cout << "Gallons (365 days)"   << setw(14) << getYearProduction() << endl;
    cout << "Lbs per gallon"       << setw(18) << getLbsPerGallon() << endl;
    cout << "Total Lbs (365 days)" << setw(12) << calcTotalLbs() << endl;
    cout << "Lbs per sale unit"    << setw(15) << getLbsPerSaleUnit() << endl;
    cout << "Total sale units"     << setw(16) << calcTotalSaleUnits() << endl;
    cout << "Revenue (sale unit)"  << setw(13) << FarmAnimal::getRevenuePerUnit() << endl;
    cout << "Total revenue"        << setw(19) << calcRevenue() << endl;
    cout << "Cost (sale unit)"     << setw(16) << FarmAnimal::getCostPerUnit() << endl;
    cout << "Total cost"           << setw(22) << calcCost() << endl;
    cout << "Total profit"         << setw(20) << calcProfit() << endl;
}
