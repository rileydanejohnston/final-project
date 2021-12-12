// Riley Johnston
// CS137
// Final project


#include "Chicken.h"
#include <iomanip>
#include <math.h>

Chicken::Chicken(int eggsUnit,
                 int eggsSum,
                 const string &anml,
                 double years,
                 double lbs,
                 double cost,
                 double revenue,
                 double eggsDays)
:FarmAnimal(anml, years, lbs, cost, revenue, eggsDays)
{
    setEggsPerUnit(eggsUnit).
    setTotalEggs(eggsSum);
}

Chicken& Chicken::setEggsPerUnit(int eggsUnit){
    eggsPerUnit = (eggsUnit >= 0 && eggsUnit <= 36) ? eggsUnit : 0;
    return *this;
}

Chicken& Chicken::setTotalEggs(int eggsSum){
    totalEggs = (eggsSum >= 0 && eggsSum <= 1000) ? eggsSum : 0;
    return *this;
}

int Chicken::getEggsPerUnit() const {
    return eggsPerUnit;
}

int Chicken::getTotalEggs() const {
    return totalEggs;
}

string Chicken::getAnimal() const {
    return animal;
}

int Chicken::calcUnits() const {
    // integer division will truncate the result.
    // I'm still using floor because I think it's good practice
    int eggSum = FarmAnimal::calcYearProduction() + getTotalEggs();
    // cout << "egg sum: " << eggSum << endl;
    // cout << "egg units: " << floor(eggSum / getEggsPerUnit()) << endl;
    return floor(eggSum / getEggsPerUnit());
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
    cout << getAnimal() << endl;
    FarmAnimal::display();
    cout      <<
    setw(6)   << getTotalEggs() << "\t" <<
    setw(10)  << calcUnits() << "\t" <<
    setw(11)  << calcRevenue() << "\t" <<
    setw(10)  << calcCost() << "\t" <<
    setw(10)  << calcProfit() << "\t" << endl;
}
