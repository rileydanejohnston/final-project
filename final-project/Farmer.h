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
    
private:
    string areaOfFocus;      // animals vs crops
    int skillRating;
    const int MAX_RATING;
    double yearsExperience;
    
public:
    Farmer(string = "Animals",
           int = 0,
           const int = 10,
           double = 0.0,
           
           string = "Alex",
           string = "1/1/1991",
           string = "Austin, TX");
    
    Farmer& setAreaOfFocus(string);
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