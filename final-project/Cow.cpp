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
         double output)
:FarmAnimal(anml, years, lbs, cost, revenue, total)
{
    setAvgMilkOutput(output).
    setName(nm);
}

Cow& Cow::setAvgMilkOutput(double output){
    // 6-7 gallons per day is avg
    avgMilkOutput = (output >= 0.0 && output <= 25.0) ? output : 0.0;
    return *this;
}

Cow& Cow::setName(const string &nm){
    name = nm;
    return *this;
}

double Cow::getAvgMilkOutput() const {
    return avgMilkOutput;
}

string Cow::getName() const {
    return name;
}

void Cow::display() const {
    cout << getName() << "\t";
    FarmAnimal::display();
    cout <<
    setw(6) << getAvgMilkOutput() << endl;
}
