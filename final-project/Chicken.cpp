// Riley Johnston
// CS137
// Final project


#include "Chicken.h"
#include <iomanip>
#include <math.h>

Chicken::Chicken(int eggsDays,
                 int eggsUnit,
                 int eggsSum,
                 const string &anml,
                 double years,
                 double lbs,
                 double cost,
                 double revenue)
:FarmAnimal(anml, years, lbs, cost, revenue)
{
    setEggsPerDay(eggsDays).
    setEggsPerUnit(eggsUnit).
    setTotalEggs(eggsSum);
}

Chicken& Chicken::setEggsPerDay(int eggDays){
    eggsPerDay = (eggDays >= 0 && eggDays <= 3) ? eggDays : 0;
    return *this;
}

Chicken& Chicken::setEggsPerUnit(int eggsUnit){
    eggsPerUnit = (eggsUnit >= 0 && eggsUnit <= 36) ? eggsUnit : 0;
    return *this;
}

Chicken& Chicken::setTotalEggs(int eggsSum){
    totalEggs = (eggsSum >= 0 && eggsSum <= 1000) ? eggsSum : 0;
    return *this;
}

int Chicken::getEggsPerDay() const {
    return eggsPerDay;
}

int Chicken::getEggsPerUnit() const {
    return eggsPerUnit;
}

int Chicken::getTotalEggs() const {
    return totalEggs;
}

int Chicken::calcUnits() const {
    // integer division will truncate the result.
    // I'm still using floor because I think it's good practice
    return floor(getTotalEggs() / getEggsPerUnit());
}

void Chicken::produce(int days){
    setTotalEggs(getTotalEggs() + (days * getEggsPerDay()));
}

void Chicken::display() const {
    FarmAnimal::display();
    cout    << getEggsPerDay() << "\t" <<
    setw(6) << getEggsPerUnit() << "\t" <<
    setw(6) << getTotalEggs() << "\t" <<
    setw(6) << calcUnits() << "\t" <<endl;
}
