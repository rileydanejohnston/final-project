// Riley Johnston
// CS137
// Final project


#include "Cow.h"

Cow::Cow(double output, double milkOutput, double cost, double price, string nm, double years, string anml)
:Animal(years, anml, nm)
{
    setAvgMilkOutput(output).
    setAvgMilkOutput(milkOutput).
    setCostPerGal(cost).
    setPricePerGal(price);
}

Cow& Cow::setAvgMilkOutput(double output){
    // 6-7 gallons per day is avg
    avgMilkOutput = (output >= 0.0 && output <= 25.0) ? output : 0.0;
    return *this;
}

Cow& Cow::setCostPerGal(double cost){
    // figure out validation
    costPerGal = (cost >= 0.0 && cost <= 25.0) ? cost : 0.0;
    return *this;
}

Cow& Cow::setPricePerGal(double price){
    // figure out validation
    pricePerGal = (price >= 0.0 && price <= 25.0) ? price : 0.0;
    return *this;
}

double Cow::getAvgMilkOutput() const {
    return avgMilkOutput;
}

double Cow::getCostPerGal() const {
    return costPerGal;
}

double Cow::getPricePerGal() const {
    return pricePerGal;
}
