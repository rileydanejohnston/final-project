// Riley Johnston
// CS137
// Final project

#include "AppleTree.h"
#include <math.h>
#include <iomanip>

AppleTree::AppleTree(double lbsUnit,
                                
                     const string &type,
                     double cost,
                     double revenue,
                     double units        ):
Crop(type, cost, revenue, units)
{
    setLbsPerUnit(lbsUnit);
}

AppleTree& AppleTree::setLbsPerUnit(double lbsUnit)
{
    // validate? 250 is arbitrary
    lbsPerUnit = (lbsUnit >= 0 && lbsUnit <= 250) ? lbsUnit : 0;
    return *this;
}

double AppleTree::getLbsPerUnit() const
{
    return lbsPerUnit;
}

int AppleTree::calcUnits() const
{
    // probably could truncate and get the right answer
    // better practice is floor
    return floor(Crop::getTotalUnits() / getLbsPerUnit());
}

double AppleTree::calcCost() const
{
    return calcUnits() * Crop::getCostPerUnit();
}

double AppleTree::calcRevenue() const
{
    return calcUnits() * Crop::getRevenuePerUnit();
}

double AppleTree::calcProfit() const
{
    return calcRevenue() - calcCost();
}

void AppleTree::display() const
{
    Crop::display();
    cout << "Apples    (lbs): " << setw(10) <<  Crop::getTotalUnits()     << endl;
    cout << "Apples  (units): " << setw(10) <<  calcUnits()    << endl;
    cout << "Revenue (total): " << setw(10) <<  calcRevenue() << endl;
    cout << "Cost    (total): " << setw(10) <<  calcCost()    << endl;
    cout << "Profit  (total): " << setw(10) <<  calcProfit()  << endl;
}
