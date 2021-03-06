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
    friend ostream& operator<<(ostream&, const Farm&);
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
    
    int produceCounter;
    int harvestCounter;
    
    void incrementProduceCounter();
    void incrementHarvestCounter();
public:
    // initialize with a farmer
    Farm(const Farmer& = Farmer());
    Farm(const Farm&);
    ~Farm();
    
    // template? add 1 crop or the other?
    // bool addFarmer(const Farmer&);
    // bool removeFarmer(int) const;
    
    Farm& setAnimalRevenue(double);
    Farm& setAnimalCost(double);
    Farm& setCropRevenue(double);
    Farm& setCropCost(double);
    Farm& setTotalRevenue(double);
    Farm& setTotalCost(double);
    
    int getProduceCounter() const;
    int getHarvestCounter() const;
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
    
    void deleteAnimalList() const;
    void deleteCropList() const;
    
    void displayAnimals() const;
    void displayCrops() const;
    void displayFarmer() const;
    void displayFarmFigures() const;
    void displayEntireFarm() const;
    
    void produce();
    void harvest();
    
    
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
