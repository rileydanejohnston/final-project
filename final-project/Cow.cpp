// Riley Johnston
// CS137
// Final project


#include "Cow.h"
#include <iomanip>

Cow::Cow(double gal,
         double totalGal,
         const string &anml,
         double years,
         double lbs,
         double cost,
         double revenue)
:FarmAnimal(anml, years, lbs, cost, revenue)
{
    setGallonsPerDay(gal).
    setTotalGallons(totalGal);
}

Cow& Cow::setGallonsPerDay(double gal){
    gallonsPerDay = (gal >= 0.0 && gal <= 25.0) ? gal : 0.0;
    return *this;
}

Cow& Cow::setTotalGallons(double totalGal){
    totalGallons = (totalGal >= 0.0 && totalGal <= 15000.0) ? totalGal : 0.0;
    return *this;
}

double Cow::getGallonsPerDay() const {
    return gallonsPerDay;
}

double Cow::getTotalGallons() const
{
    return totalGallons;
}

void Cow::display() const {
    FarmAnimal::display();
    cout    << getGallonsPerDay() << "\t" <<
    setw(6) << getTotalGallons() << "\t" << endl;
}
