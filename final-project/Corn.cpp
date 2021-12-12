// Riley Johnston
// CS137
// Final project

#include "Corn.h"
#include <iomanip>
#include <math.h>

Corn::Corn(const string &type,
           double cost,
           double revenue,
           double acres     ):
Crop(type, cost, revenue, acres)
{
    
}

double Corn::getBushelsPerAcre() const
{
    return BUSHELS_PER_ACRE;
}

double Corn::calcTotalBushels() const
{
    return floor ( Crop::getTotalUnits() * getBushelsPerAcre() );
}

double Corn::calcRevenue() const
{
    return Crop::getRevenuePerUnit() * calcTotalBushels();
}

double Corn::calcCost() const
{
    return Crop::getCostPerUnit() * calcTotalBushels();
}

double Corn::calcProfit() const
{
    return calcRevenue() - calcCost();
}

void Corn::display() const
{
    Crop::display();
    cout << endl;
    cout << "Square  acres: " << setw(11) << Crop::getTotalUnits()   << endl;
    cout << "Total bushels: " << setw(11) << calcTotalBushels()   << endl;
    cout << "Revenue total: " << setw(11) << calcRevenue() << endl;
    cout << "Cost    total: " << setw(11) << calcCost()    << endl;
    cout << "Profit  total: " << setw(11) << calcProfit()  << endl;
}
