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
   
    double animalRevenue;
    double animalCost;
    double cropRevenue;
    double cropCost;
    double totalRevenue;
    double totalCost;
public:
    // initialize with a farmer
    Farm(const Farmer& = Farmer());
    Farm(const Farm&);
    ~Farm();
    
    // template? add 1 crop or the other?
    bool addFarmer(const Farmer&);
    bool removeFarmer(int) const;
    
    Farm& setAnimalRevenue(double);
    Farm& setAnimalCost(double);
    Farm& setCropRevenue(double);
    Farm& setCropCost(double);
    Farm& setTotalRevenue(double);
    Farm& setTotalCost(double);
    
    double getAnimalRevenue() const;
    double getAnimalCost() const;
    double getCropRevenue() const;
    double getCropCost() const;
    double getTotalRevenue() const;
    double getTotalCost() const;
    Farmer getHeadFarmerInst() const;
    
    double calcAnimalProfit() const;
    double calcCropProfit() const;
    double calcTotalProfit() const;
    
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
    
    void produce();
    void harvest();
    void updateFarmTotals();
    
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
