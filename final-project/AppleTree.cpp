// Riley Johnston
// CS137
// Final project

#include "AppleTree.h"
#include <math.h>
#include <iomanip>

AppleTree::AppleTree(double lbsUnit,
                                
                     const string &identity,
                     double cost,
                     double revenue,
                     double units        ):
Crop(identity, cost, revenue, units)
{
    setLbsPerUnit(lbsUnit);
}

ostream& operator<<(ostream& output, const AppleTree &right)
{
    output << fixed << setprecision(2) << endl;
    output << "Crop"                << setw(28) << right.getCropType() << endl;
    output << "ID"                  << setw(30) << right.Crop::getCropId() << endl;
    output << "------------------------------------" << endl;
    output << "Apples (lbs)"        << setw(20) << right.Crop::getTotalUnits() << endl;
    output << "Lbs per sale unit"   << setw(15) << right.getLbsPerUnit() << endl;
    output << "Total sale units"    << setw(16) << right.calcUnits() << endl;
    output << "Revenue (sale unit)" << setw(13) << right.Crop::getRevenuePerUnit() << endl;
    output << "Total revenue"       << setw(19) << right.calcRevenue() << endl;
    output << "Cost (sale unit)"    << setw(16) << right.Crop::getCostPerUnit() << endl;
    output << "Total cost"          << setw(22) << right.calcCost()    << endl;
    output << "Total profit"        << setw(20) << right.calcProfit();
    return output;
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

string AppleTree::getCropType() const
{
    return CROP_TYPE;
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
    cout << fixed << setprecision(2) << endl;
    cout << "Crop"                << setw(28) << getCropType() << endl;
    cout << "ID"                  << setw(30) << Crop::getCropId() << endl;
    cout << "------------------------------------" << endl;
    cout << "Apples (lbs)"        << setw(20) << Crop::getTotalUnits() << endl;
    cout << "Lbs per sale unit"   << setw(15) << getLbsPerUnit() << endl;
    cout << "Total sale units"    << setw(16) << calcUnits() << endl;
    cout << "Revenue (sale unit)" << setw(13) << Crop::getRevenuePerUnit() << endl;
    cout << "Total revenue"       << setw(19) << calcRevenue() << endl;
    cout << "Cost (sale unit)"    << setw(16) << Crop::getCostPerUnit() << endl;
    cout << "Total cost"          << setw(22) << calcCost()    << endl;
    cout << "Total profit"        << setw(20) << calcProfit()  << endl;
}
