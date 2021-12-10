// Riley Johnston
// CS137
// Final project

#ifndef FARM_H
#define FARM_H

#include "Person.h"
#include "Farmer.h"
#include "Crop.h"
#include "Corn.h"
#include "AppleTree.h"
#include "Chicken.h"
#include "Cow.h"
#include "FarmAnimal.h"


#include <vector>
#include <iostream>
using namespace std;

class Farm {
private:
    Farmer headFarmer;
    vector<const FarmAnimal*> animals;
    // vector<Farmers*> farmers;
    // vector<Crop*> crops;
   
    double revenue;
    double cost;
public:
    // initialize with a farmer
    Farm(const Farmer& = Farmer());
    Farm(const Farm&);
    ~Farm();
    
    // template? add 1 crop or the other?
    bool addFarmer(const Farmer&);
    bool removeFarmer(int) const;
    
    Farm& setRevenue(double);
    Farm& setCost(double);
    
    double getRevenue() const;
    double getCost() const;
    double calcProfit() const;
    
    bool removeAnimal(int);
    
    unsigned long getAnimalSize() const;
    // add crops
    // add people
    // add animals
    
    // remove crops
    // remove ppl
    // remove animals
    
    void deleteAnimalList() const;
    void displayAnimals() const;
    
    // return bool?
    template <typename T>
    void addAnimal(const T &anml)
    {
        animals.push_back(&anml);
    }
    
};

#endif
