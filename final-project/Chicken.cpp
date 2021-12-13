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

ostream& operator<<(ostream& output, const Chicken &right)
{
    output << endl;
    output << "Animal"               << setw(26) << right.getAnimal() << endl;
    output << "ID"                   << setw(30) << right.FarmAnimal::getId() << endl;
    output << "------------------------------------" << endl;
    output << "Age"                  << setw(29) << right.FarmAnimal::getAge() << endl;
    output << "Weight (lbs)"         << setw(20) << right.FarmAnimal::getWeight() << endl;
    output << "Units per day"        << setw(19) << right.FarmAnimal::getAveragePerDay() << endl;
    output << "Eggs (365 days)"   << setw(17) << right.getYearProduction() << endl;
    output << "Eggs per sale unit"       << setw(14) << right.getEggsPerUnit() << endl;
    output << "Total sale units"     << setw(16) << right.calcUnits() << endl;
    output << "Revenue (sale unit)"  << setw(13) << right.FarmAnimal::getRevenuePerUnit() << endl;
    output << "Total revenue"        << setw(19) << right.calcRevenue() << endl;
    output << "Cost (sale unit)"     << setw(16) << right.FarmAnimal::getCostPerUnit() << endl;
    output << "Total cost"           << setw(22) << right.calcCost() << endl;
    output << "Total profit"         << setw(20) << right.calcProfit();
    return output;
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
    return ANIMAL;
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
    cout << "ID"                   << setw(30) << FarmAnimal::getId() << endl;
    cout << "------------------------------------" << endl;
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
