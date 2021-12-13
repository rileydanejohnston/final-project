// Riley Johnston
// CS137
// Final project

#ifndef FARMER_H
#define FARMER_H

#include "Person.h"
#include <iostream>
// #include <string>
using namespace std;

class Farmer : public Person {
    friend ostream& operator<<(ostream&, const Farmer&);
private:
    string areaOfFocus;      // animals vs crops
    int skillRating;
    const int MAX_RATING;
    double yearsExperience;
    
public:
    Farmer(const string& = "Animals",
           int = 0,
           const int = 10,
           double = 0.0,
           
           const string& = "Alex",
           const string& = "1/1/1991",
           const string& = "Austin, TX"     );
    
    Farmer& setAreaOfFocus(const string&);
    Farmer& setSkillRating(int);
    // can't set a const? validate in main maybe?
    Farmer& setYearsExperience(double);
    
    string getAreaOfFocus() const;
    int getSkillRating() const;
    int getMaxRating() const;
    double getYearsExperience() const;
    
    void display() const;
};

#endif
