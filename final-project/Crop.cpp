// Riley Johnston
// CS137
// Final project

#include "Crop.h"
#include <iomanip>

Crop::Crop(const string &type,
           double cost,
           double revenue,
           double units     )
{
    setCropType(type).
    setCostPerUnit(cost).
    setRevenuePerUnit(revenue).
    setTotalUnits(units);
}

Crop& Crop::setCropType(const string &type)
{
    cropType = type;
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
    totalUnits = (units >= 0 && units <= 5000.00) ? units : 0.0;
    return *this;
}

string Crop::getCropType() const
{
    return cropType;
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
    cout << "Crop Type: "      << setw(15) <<  getCropType()       << endl;
    cout << "Revenue (unit): " << setw(10) <<  getRevenuePerUnit() << endl;
    cout << "Cost    (unit): " << setw(10) <<  getCostPerUnit()    << endl;
}
