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

ostream& operator<<(ostream& output, const Corn &right)
{
    output << endl;
    output << "Crop"                       << setw(28) << right.getCropType() << endl;
    output << "ID"                         << setw(30) << right.Crop::getCropId() << endl;
    output << "------------------------------------" << endl;
    output << "Acres"                      << setw(27) << right.Crop::getTotalUnits() << endl;
    output << "Bushels per acre"           << setw(16) << right.getBushelsPerAcre() << endl;
    output << "Bushels (sale units)"       << setw(12) << right.calcTotalBushels()   << endl;
    output << "Revenue (sale unit)"        << setw(13) << right.Crop::getRevenuePerUnit() << endl;
    output << "Total revenue"              << setw(19) << right.calcRevenue() << endl;
    output << "Cost (sale unit)"           << setw(16) << right.Crop::getCostPerUnit() << endl;
    output << "Total cost"                 << setw(22) << right.calcCost()    << endl;
    output << "Total profit"               << setw(20) << right.calcProfit();
    return output;
}

double Corn::getBushelsPerAcre() const
{
    return BUSHELS_PER_ACRE;
}

string Corn::getCropType() const
{
    return CROP_TYPE;
}

int Corn::calcTotalBushels() const
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
    cout << endl;
    cout << "Crop"                       << setw(28) << getCropType() << endl;
    cout << "ID"                         << setw(30) << Crop::getCropId() << endl;
    cout << "------------------------------------" << endl;
    cout << "Acres"                      << setw(27) << Crop::getTotalUnits() << endl;
    cout << "Bushels per acre"           << setw(16) << getBushelsPerAcre() << endl;
    cout << "Bushels (sale units)"       << setw(12) << calcTotalBushels()   << endl;
    cout << "Revenue (sale unit)"        << setw(13) << Crop::getRevenuePerUnit() << endl;
    cout << "Total revenue"              << setw(19) << calcRevenue() << endl;
    cout << "Cost (sale unit)"           << setw(16) << Crop::getCostPerUnit() << endl;
    cout << "Total cost"                 << setw(22) << calcCost()    << endl;
    cout << "Total profit"               << setw(20) << calcProfit()  << endl;
}
