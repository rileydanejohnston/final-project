// Riley Johnston
// CS137
// Final project


#include "Cow.h"
#include <iomanip>

Cow::Cow(const string &anml,
         const string &nm,
         double years,
         double lbs,
         double cost,
         double revenue,
         double total,
         double avg)
:FarmAnimal(anml, years, lbs, cost, revenue, total, avg)
{
    setName(nm);
}

Cow& Cow::setName(const string &nm){
    name = nm;
    return *this;
}

string Cow::getName() const {
    return name;
}

void Cow::display() const {
    cout << getName() << "\t";
    FarmAnimal::display();
    cout << endl;
}
