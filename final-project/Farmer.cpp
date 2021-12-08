// Riley Johnston
// CS137
// Final project

#include "Farmer.h"
#include <iomanip>

Farmer::Farmer(string focus,
               int rating,
               const int MAX,
               double exp,
               
               string nm,
               string bday,
               string town):
Person(nm, bday, town),
MAX_RATING(MAX)
{
    setAreaOfFocus(focus).
    setSkillRating(rating).
    setYearsExperience(exp);
}

Farmer& Farmer::setAreaOfFocus(string focus)
{
    areaOfFocus = focus;
    return *this;
}

Farmer& Farmer::setSkillRating(int rating)
{
    skillRating = (rating >= 0 && rating <= getMaxRating()) ? rating : 0;
    return *this;
}

Farmer& Farmer::setYearsExperience(double exp)
{
    yearsExperience = (exp >= 0.0 && exp <= 100.0) ? exp : 0.0;
    return *this;
}

string Farmer::getAreaOfFocus() const
{
    return areaOfFocus;
}

int Farmer::getSkillRating() const
{
    return skillRating;
}

int Farmer:: getMaxRating() const
{
    return MAX_RATING;
}

double Farmer::getYearsExperience() const
{
    return yearsExperience;
}

void Farmer::display() const
{
    Person::display();
    cout << "Focus: " << setw(29) << getAreaOfFocus() << endl;
    cout << "Rating: " << setw(24) << getSkillRating() << " / " << getMaxRating() << endl;
    cout << "Experience (years): " << setw(16) << getYearsExperience() << endl;
}
