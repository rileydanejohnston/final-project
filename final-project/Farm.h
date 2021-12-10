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
    vector<const Crop*> crops;
   
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
    bool removeCrop(int);
    
    unsigned long getAnimalSize() const;
    unsigned long getCropSize() const;
    // add crops
    // add people
    // add animals
    
    // remove crops
    // remove ppl
    // remove animals
    
    void deleteAnimalList() const;
    void deleteCropList() const;
    
    void displayAnimals() const;
    void displayCrops() const;
    
    // return bool?
    template <typename T>
    void addAnimal(const T &anml)
    {
        animals.push_back(&anml);
    }
    
    // return bool?
    template <typename T>
    void addCrop(const T &newCrop)
    {
        crops.push_back(&newCrop);
    }
    
};

#endif
