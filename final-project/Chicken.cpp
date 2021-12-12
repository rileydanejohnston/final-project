// Riley Johnston
// CS137
// Final project


#include "Chicken.h"
#include <iomanip>
#include <math.h>

Chicken::Chicken(int eggsUnit,
                 const string &anml,
                 double years,
                 double lbs,
                 double cost,
                 double revenue,
                 double eggsDays)
:FarmAnimal(anml, years, lbs, cost, revenue, eggsDays)
{
    setEggsPerUnit(eggsUnit);
}

Chicken& Chicken::setEggsPerUnit(int eggsUnit){
    eggsPerUnit = (eggsUnit >= 0 && eggsUnit <= 36) ? eggsUnit : 0;
    return *this;
}

int Chicken::getEggsPerUnit() const {
    return eggsPerUnit;
}

int Chicken::getYearProduction() const {
    return FarmAnimal::calcYearProduction();
}

string Chicken::getAnimal() const {
    return animal;
}

int Chicken::calcUnits() const {
    // integer division will truncate the result.
    // I'm still using floor because I think it's good practice
    // cout << "egg sum: " << eggSum << endl;
    // cout << "egg units: " << floor(eggSum / getEggsPerUnit()) << endl;
    return floor(getYearProduction() / getEggsPerUnit());
}

double Chicken::calcRevenue() const
{
    return FarmAnimal::getRevenuePerUnit() * calcUnits();
}

double Chicken::calcCost() const
{
    return FarmAnimal::getCostPerUnit() * calcUnits();
}

double Chicken::calcProfit() const
{
    return calcRevenue() - calcCost();
}

void Chicken::display() const {
    cout << endl;
    cout << "Animal"               << setw(26) << getAnimal() << endl;
    cout << "------------------------------------" << endl;
    cout << "ID"                   << setw(30) << FarmAnimal::getId() << endl;
    cout << "Age"                  << setw(29) << FarmAnimal::getAge() << endl;
    cout << "Weight (lbs)"         << setw(20) << FarmAnimal::getWeight() << endl;
    cout << "Units per day"        << setw(19) << FarmAnimal::getAveragePerDay() << endl;
    cout << "Eggs (365 days)"   << setw(17) << getYearProduction() << endl;
    cout << "Eggs per sale unit"       << setw(14) << getEggsPerUnit() << endl;
    cout << "Total sale units"     << setw(16) << calcUnits() << endl;
    cout << "Revenue (sale unit)"  << setw(13) << FarmAnimal::getRevenuePerUnit() << endl;
    cout << "Total revenue"        << setw(19) << calcRevenue() << endl;
    cout << "Cost (sale unit)"     << setw(16) << FarmAnimal::getCostPerUnit() << endl;
    cout << "Total cost"           << setw(22) << calcCost() << endl;
    cout << "Total profit"         << setw(20) << calcProfit() << endl;
}
