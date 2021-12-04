// Riley Johnston
// CS137
// Final project


#include "Cow.h"
#include <iomanip>

Cow::Cow(const string &anml,
         const string &nm,
         double years,
         double cost,
         double revenue,
         double total,
         double output)
:FarmAnimal(anml, nm, years, cost, revenue, total)
{
    setAvgMilkOutput(output);
}

Cow& Cow::setAvgMilkOutput(double output){
    // 6-7 gallons per day is avg
    avgMilkOutput = (output >= 0.0 && output <= 25.0) ? output : 0.0;
    return *this;
}

double Cow::getAvgMilkOutput() const {
    return avgMilkOutput;
}


void Cow::display() const {
    FarmAnimal::display();
    cout <<
    setw(6) << getAvgMilkOutput() << endl;
}
