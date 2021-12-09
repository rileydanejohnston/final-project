// Riley Johnston
// CS137
// Final project

#include "AppleTree.h"
#include <math.h>
#include <iomanip>

AppleTree::AppleTree(double lbsUnit,
                     double lbsAppl,
                                
                     const string &type,
                     double cost,
                     double revenue   ):
Crop(type, cost, revenue)
{
    setLbsPerUnit(lbsUnit).
    setLbsApples(lbsAppl);
}

AppleTree& AppleTree::setLbsPerUnit(double lbsUnit)
{
    // validate? 50 is arbitrary
    lbsPerUnit = (lbsUnit >= 0 && lbsUnit <= 25) ? lbsUnit : 0;
    return *this;
}

AppleTree& AppleTree::setLbsApples(double lbsAppl)
{
    // validate? 5000 is arbitrary
    lbsApples = (lbsAppl >= 0 && lbsAppl <= 1000) ? lbsAppl : 0;
    return *this;
}

double AppleTree::getLbsPerUnit() const
{
    return lbsPerUnit;
}

double AppleTree::getLbsApples() const
{
    return lbsApples;
}

int AppleTree::calcUnits() const
{
    // probably could truncate and get the right answer
    // better practice is floor
    return floor(getLbsApples() / getLbsPerUnit());
}

double AppleTree::calcCostTotal() const
{
    return calcUnits() * Crop::getCostPerUnit();
}

double AppleTree::calcRevenueTotal() const
{
    return calcUnits() * Crop::getRevenuePerUnit();
}

double AppleTree::calcProfitTotal() const
{
    return calcUnits() * Crop::calcProfitPerUnit();
}

void AppleTree::display() const
{
    Crop::display();
    cout << "Apples    (lbs): " << setw(10) <<  getLbsApples()     << endl;
    cout << "Apples  (units): " << setw(10) <<  getLbsPerUnit()    << endl;
    cout << "Revenue (total): " << setw(10) <<  calcRevenueTotal() << endl;
    cout << "Cost    (total): " << setw(10) <<  calcCostTotal()    << endl;
    cout << "Profit  (total): " << setw(10) <<  calcProfitTotal()  << endl;
}
