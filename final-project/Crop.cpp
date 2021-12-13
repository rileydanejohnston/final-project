// Riley Johnston
// CS137
// Final project

#include "Crop.h"
#include <iomanip>

Crop::Crop(const string &identity,
           double cost,
           double revenue,
           double units     )
{
    setCropId(identity).
    setCostPerUnit(cost).
    setRevenuePerUnit(revenue).
    setTotalUnits(units);
}

ostream& operator<<(ostream& output, const Crop &right)
{
    output << "ID"<< setw(30) << right.getCropId()<< endl;
    output << "Revenue (sale unit)" << setw(13) <<  right.getRevenuePerUnit() << endl;
    output << "Cost (sale unit)" << setw(16) <<  right.getCostPerUnit()    << endl;
    output << "Units" << setw(27) <<  right.getCostPerUnit();
    return output;
}

Crop& Crop::setCropId(const string &identity)
{
    cropId = identity;
    return *this;
}

// validation? no idea what top limit should be
Crop& Crop::setCostPerUnit(double cost)
{
    costPerUnit = (cost >= 0.0 && cost <= 1000.0) ? cost : 0.0;
    return *this;
}

// validation? no idea what top limit should be
Crop& Crop::setRevenuePerUnit(double revenue)
{
    revenuePerUnit = (revenue >= 0.0 && revenue <= 1000.0) ? revenue : 0.0;
    return *this;
}

Crop& Crop::setTotalUnits(double units)
{
    totalUnits = (units >= 0 && units <= 1000.00) ? units : 0.0;
    return *this;
}

string Crop::getCropId() const
{
    return cropId;
}

double Crop::getCostPerUnit() const
{
    return costPerUnit;
}

double Crop::getRevenuePerUnit() const
{
    return revenuePerUnit;
}

double Crop::getTotalUnits() const
{
    return totalUnits;
}

double Crop::calcRevenue() const
{
    return getTotalUnits() * getRevenuePerUnit();
}

double Crop::calcCost() const
{
    return getTotalUnits() * getCostPerUnit();
}

double Crop::calcProfit() const
{
    return calcRevenue() - calcCost();
}

void Crop::display() const
{
    cout << "ID"<< setw(30) << getCropId()<< endl;
    cout << "Revenue (sale unit)" << setw(13) <<  getRevenuePerUnit() << endl;
    cout << "Cost (sale unit)" << setw(16) <<  getCostPerUnit()    << endl;
    cout << "Units" << setw(27) <<  getCostPerUnit()    << endl;
}
