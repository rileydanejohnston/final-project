// Riley Johnston
// CS137
// Final project

#include "Corn.h"
#include <iomanip>

Corn::Corn(double acres,
           
           const string &type,
           double cost,
           double revenue   ):
Crop(type, cost, revenue)
{
    setSquareAcres(acres);
}

Corn& Corn::setSquareAcres(double acres)
{
    // avg farm in US is 444 sq acres
    // largest in world is 22.5 million (China)
    squareAcres = (acres >= 0.0 && acres <= 1000.0) ? acres : 0.0;
    return *this;
}

double Corn::getSquareAcres() const
{
    return squareAcres;
}

double Corn::calcCostTotal() const
{
    return Crop::getCostPerUnit() * getSquareAcres();
}

double Corn::calcRevenueTotal() const
{
    return Crop::getRevenuePerUnit() * getSquareAcres();
}

double Corn::calcProfitTotal() const
{
    return Crop::calcProfitPerUnit() * getSquareAcres();
}

void Corn::display() const
{
    Crop::display();
    cout << endl;
    cout << "Square  acres: " << setw(11) << getSquareAcres()   << endl;
    cout << "Revenue total: " << setw(11) << calcRevenueTotal() << endl;
    cout << "Cost    total: " << setw(11) << calcCostTotal()    << endl;
    cout << "Profit  total: " << setw(11) << calcProfitTotal()  << endl;
}
