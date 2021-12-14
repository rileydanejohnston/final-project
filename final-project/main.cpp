// Riley Johnston
// CS137
// Final project

#include "Crop.h"
#include "Corn.h"
#include "AppleTree.h"
#include "FarmAnimal.h"
#include "Cow.h"
#include "Chicken.h"
#include "Person.h"
#include "Farmer.h"
#include "Farm.h"
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // farmer variables
    string name, bday, town, focus;
    double experience = 0.0;
    int rating = 0, maxRating = 0;
    // animal variables
    string identity;
    double avgGal= 0.0, lbsPerGallon = 0.0, cowLbsSaleUnit = 0.0, years = 0.0, lbs = 0.0, cost = 0.0, revenue = 0.0;
    int eggsPerDay = 0, eggsPerUnit = 0, removeItem = 0;
    // crop variables
    double lbsUnit, lbsApple, acres, bushelsPerAcre;
    string type;
    // file variables
    ofstream outputFile;
    string fileName;
    
    cout << "Name: ";
    getline(cin, name);
    
    cout << "Birthday: ";
    getline(cin, bday);
    
    cout << "Hometown: ";
    getline(cin, town);
    
    cout << "Focus (animals or crops): ";
    getline(cin, focus);
    
    cout << "Experience (years): ";
    cin >> experience;
    
    // explain this better?
    cout << "Max rating (for rating your skills): ";
    cin >> maxRating;
    
    cout << "Your rating (from 0 to " << maxRating << "): ";
    cin >> rating;
    cin.ignore();
    
    Farmer user(focus, rating, maxRating, experience, name, bday, town);
    Farm farm(user);
    
    char selection = 0;
    
    do {
        // print menu
        cout << endl;
        cout << "Farm Menu" << endl;
        cout << "-------------------" << endl;
        cout << "1) Add animal" << endl;
        cout << "2) Add crops" << endl;
        cout << "3) Remove animal" << endl;
        cout << "4) Remove crops" << endl;
        cout << "5) Display animals" << endl;
        cout << "6) Display crops" << endl;
        cout << "7) Produce - animals" << endl;
        cout << "8) Harvest - crops" << endl;
        cout << "9) Show farmer info" << endl;
        cout << "p) Print farm to console" << endl;
        cout << "s) Save farm to file" << endl;
        cout << "q) Quit" << endl << endl;
        cout << "Selection: ";
        cin >> selection;
        cin.ignore();
        
        if (selection == '1'){
            
            do {
                cout << "1) Chicken" << endl;
                cout << "2) Cow" << endl << endl;
                cout << "Selection: ";
                cin >> selection;
                cin.ignore();
                
                if (selection == '1'){
                    // automatically "Chicken" or give them a name?
                    cout << "Animal ID (name, number, etc): ";
                    getline(cin, identity);
                    
                    cout << "Age: ";
                    cin >> years;
                    
                    cout << "Weight (lbs): ";
                    cin >> lbs;
                    
                    cout << "Eggs per day: ";
                    cin >> eggsPerDay;
                    
                    // explain?
                    cout << "Eggs per carton (ex 12, 18): ";
                    cin >> eggsPerUnit;
                    
                    cout << "Cost per carton?: ";
                    cin >> cost;
                    
                    cout << "Revenue per carton?: ";
                    cin >> revenue;
                    cin.ignore();
                    
                    Chicken *newChicken = new Chicken(eggsPerUnit, identity, years, lbs, cost, revenue, eggsPerDay);
                    
                    // passing what newChicken is pointing at..
                    farm.addAnimal(*newChicken);
                    
                    cout << "Added one chicken!" << endl;
                }
                else if (selection == '2'){
                    // automatically add "Cow" or keep as name?
                    cout << "Animal ID (name, number, etc): ";
                    getline(cin, identity);
                    
                    cout << "Age: ";
                    cin >> years;
                    
                    cout << "Weight (lbs): ";
                    cin >> lbs;
                    
                    cout << "Gallons of milk (per day): ";
                    cin >> avgGal;
                    
                    cout << "Pounds per gallon (average is 8.6 lbs per gallon): ";
                    cin >> lbsPerGallon;
                    
                    cout << "Pounds per sale unit (ex. milk sold in 100 lb units): ";
                    cin >> cowLbsSaleUnit;
                    
                    cout << "Cost per sale unit?: ";
                    cin >> cost;
                    
                    cout << "Revenue per sale unit?: ";
                    cin >> revenue;
                    cin.ignore();
                    
                    Cow *newCow = new Cow(cowLbsSaleUnit, lbsPerGallon, identity, years, lbs, cost, revenue, avgGal);
                    
                    // passing what newCow is pointing at..
                    farm.addAnimal(*newCow);
                    
                    cout << "Added one cow!" << endl;
                }
                else if (selection != '1' || selection != '2'){
                    cout << "Invalid selection." << endl;
                }
            }
            while (selection != '1' && selection != '2');
            
        }
        else if(selection == '2'){
            // COWS cout << "Animal\t\tAge\t\tWeight\t\tGallons\t\tRevenue\t\t  Cost\t\tProfit" << endl;
            // CHICKENS cout << "Animal\t\tAge\t\tWeight\t\t  Eggs\t\tUnits\t\tRevenue\t\t  Cost\t\tProfit" << endl;
            do {
                cout << "1) Apple Tree" << endl;
                cout << "2) Corn" << endl << endl;
                cout << "Selection: ";
                cin >> selection;
                cin.ignore();
                
                if (selection == '1'){
                    cout << "Crop ID (ex tree1): ";
                    getline(cin, identity);
                    
                    cout << "Tree yield (lbs of apples): ";
                    cin >> lbsApple;
                    
                    cout << "Sale unit size (lbs per unit): ";
                    cin >> lbsUnit;
                    
                    cout << "Cost per sale unit?: ";
                    cin >> cost;
                    
                    cout << "Revenue per sale unit?: ";
                    cin >> revenue;
                    cin.ignore();
                    
                    AppleTree *newTree = new AppleTree(lbsUnit, identity, cost, revenue, lbsApple);
                    
                    // passing what newChicken is pointing at..
                    farm.addCrop(*newTree);
                    
                    cout << "Added one apple tree!" << endl;
                }
                else if (selection == '2'){
                    cout << "Crop ID (ex field1): ";
                    getline(cin, identity);
                    
                    cout << "Total acres: ";
                    cin >> acres;
                    
                    cout << "Bushels per acre (174.8 is average): ";
                    cin >> bushelsPerAcre;
                    
                    cout << "Cost per bushel: ";
                    cin >> cost;
                    
                    cout << "Revenue per bushel: ";
                    cin >> revenue;
                    cin.ignore();
                    
                    Corn *newCorn = new Corn(bushelsPerAcre, identity, cost, revenue, acres);
                    
                    // passing what newChicken is pointing at..
                    farm.addCrop(*newCorn);
                    
                    cout << "Added " << acres << " acres of corn!" << endl;
                }
                else if (selection != '1' || selection != '2'){
                    cout << "Invalid selection." << endl;
                }
            }
            while (selection != '1' && selection != '2');
            
        }
        else if(selection == '3'){
            // no animals
            if (farm.getAnimalSize() == 0)
            {
                cout << "There are no animals to remove." << endl;
            }
            else
            {
                farm.deleteAnimalList();
                cout << "Which animal do you want to remove?" << endl;
                cout << "Remove #: ";
                cin >> removeItem;
                cin.ignore();
                
                if (farm.removeAnimal(removeItem))
                {
                    cout << "Success! Animal " << removeItem << " was removed!" << endl;
                }
                else
                {
                    cout << "Error! The animal was not deleted." << endl;
                }
            }
        }
        else if(selection == '4'){
            if (farm.getCropSize() == 0)
            {
                cout << "There are no crops to remove." << endl;
            }
            else
            {
                farm.deleteCropList();
                cout << "Which crop do you want to remove?" << endl;
                cout << "Remove #: ";
                cin >> removeItem;
                cin.ignore();
                
                if (farm.removeCrop(removeItem))
                {
                    cout << "Success! Crop " << removeItem << " was removed!" << endl;
                }
                else
                {
                    cout << "Error! The crop was not deleted." << endl;
                }
            }
        }
        else if (selection == '5')
        {
            farm.displayAnimals();
        }
        else if (selection == '6')
        {
            farm.displayCrops();
        }
        else if (selection == '7')
        {
            farm.produce();
        }
        else if (selection == '8')
        {
            farm.harvest();
        }
        else if (selection == '9')
        {
            farm.displayFarmer();
        }
        else if (selection == 'p' || selection == 'P')
        {
            farm.displayEntireFarm();
        }
        else if (selection == 's' || selection == 'S')
        {
            cout << "Save file as (ex. 'yourFile.txt'): ";
            getline(cin, fileName);
            
            outputFile.open(fileName);
            outputFile << farm << endl;
            outputFile.close();
        }
        else if(selection == 'q' || selection == 'Q'){
            cout << "Thank you for using the program!" << endl;
        }
        else if(selection != 'q' || selection != 'Q'){
            cout << "Invalid Selection." << endl;
        }
    }
    while(selection != 'q' && selection != 'Q');
    
    return 0;
}
