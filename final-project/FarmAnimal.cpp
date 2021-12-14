// Riley Johnston
// CS137
// Final project

#include "FarmAnimal.h"
#include <iomanip>

FarmAnimal::FarmAnimal(const string &identity,
               double years,
               double lbs,
               double cost,
               double revenue,
               double numPerDay     )
{
    setId(identity).
    setAge(years).
    setWeight(lbs).
    setCostPerUnit(cost).
    setRevenuePerUnit(revenue).
    setAveragePerDay(numPerDay);
}

ostream& operator<<(ostream& output, const FarmAnimal &right)
{
    output << fixed << setprecision(2) << endl;
    output << "ID: "                  << setw(30) << right.getId() << endl;
    output << "Age: "                 << setw(29) << right.getAge() << endl;
    output << "Weight (lbs): "        << setw(20) << right.getWeight() << endl;
    output << "Revenue (sale unit): " << setw(13) << right.getRevenuePerUnit() << endl;
    output << "Cost (sale unit): "    << setw(16) << right.getCostPerUnit() << endl;
    output << "Units per day: "       << setw(19) << right.getAveragePerDay();
    return output;
}

FarmAnimal& FarmAnimal::setId(const string &identity)
{
    id = identity;
    return *this;
}

FarmAnimal& FarmAnimal::setAge(double years)
{
    age = (years >= 0 && years <= 50.0) ? years : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setWeight(double lbs)
{
    weight = (lbs >= 0 && lbs <= 5000.0) ? lbs : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setCostPerUnit(double cost){
    // figure out validation
    costPerUnit = (cost >= 0.0 && cost <= 2500.0) ? cost : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setRevenuePerUnit(double revenue){
    // figure out validation
    revenuePerUnit = (revenue >= 0.0 && revenue <= 2500.0) ? revenue : 0.0;
    return *this;
}

FarmAnimal& FarmAnimal::setAveragePerDay(double numPerDay)
{
    averagePerDay = (numPerDay >= 0 && numPerDay <= 50.0) ? numPerDay : 1;
    return *this;
}

string FarmAnimal::getId() const
{
    return id;
}

double FarmAnimal::getAge() const
{
    return age;
}

double FarmAnimal::getWeight() const
{
    return weight;
}

double FarmAnimal::getCostPerUnit() const
{
    return costPerUnit;
}

double FarmAnimal::getRevenuePerUnit() const
{
    return revenuePerUnit;
}

double FarmAnimal::getAveragePerDay() const
{
    return averagePerDay;
}

double FarmAnimal::calcYearProduction() const
{
    return getAveragePerDay() * 365;
}

double FarmAnimal::calcRevenue() const
{
    return getRevenuePerUnit() * calcYearProduction();
}

double FarmAnimal::calcCost() const
{
    return getCostPerUnit() * calcYearProduction();
}

double FarmAnimal::calcProfit() const
{
    return calcRevenue() - calcCost();
}

void FarmAnimal::display() const {
    cout << fixed << setprecision(2) << endl;
    cout << "ID: "                  << setw(30) << getId() << endl;
    cout << "Age: "                 << setw(29) << getAge() << endl;
    cout << "Weight (lbs): "        << setw(20) << getWeight() << endl;
    cout << "Revenue (sale unit): " << setw(13) << getRevenuePerUnit() << endl;
    cout << "Cost (sale unit): "    << setw(16) << getCostPerUnit() << endl;
    cout << "Units per day: "       << setw(19) << getAveragePerDay() << endl;
}
