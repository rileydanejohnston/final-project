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
#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    // farmer variables
    string name, bday, town, focus;
    double experience = 0.0;
    int rating = 0, maxRating = 0;
    // animal variables
    string animal;
    double avgGal= 0.0, totalGal = 0.0, years = 0.0, lbs = 0.0, cost = 0.0, revenue = 0.0;
    int eggsPerDay = 0, eggsPerUnit = 0, totalEggs = 0, removeAnimal = 0;
    
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
    cout << "Max rating: ";
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
        cout << "2) Delete animal" << endl;
        cout << "3) Display animals" << endl;
        cout << "4) Display farm" << endl;
        cout << "5) Save farm to file" << endl;
        cout << "q) Quit" << endl << endl;
        cout << "Selection: ";
        cin >> selection;
        
        if (selection == '1'){
            
            do {
                cout << "1) Chicken" << endl;
                cout << "2) Cow" << endl << endl;
                cout << "Selection: ";
                cin >> selection;
                cin.ignore();
                
                if (selection == '1'){
                    // automatically "Chicken" or give them a name?
                    cout << "Animal/name: ";
                    getline(cin, animal);
                    
                    cout << "Age: ";
                    cin >> years;
                    
                    cout << "Weight (lbs): ";
                    cin >> lbs;
                    
                    cout << "Eggs per day: ";
                    cin >> eggsPerDay;
                    
                    // explain?
                    cout << "Eggs per carton (ex 12, 18): ";
                    cin >> eggsPerUnit;
                    
                    // automatically start at zero?
                    cout << "Total eggs: ";
                    cin >> totalEggs;
                    
                    cout << "Cost per unit?: ";
                    cin >> cost;
                    
                    cout << "Revenue per unit?: ";
                    cin >> revenue;
                    cin.ignore();
                    
                    Chicken *newChicken = new Chicken(eggsPerDay, eggsPerUnit, totalEggs, animal, years, lbs, cost, revenue);
                    
                    // passing what newChicken is pointing at..
                    farm.addChicken(*newChicken);
                    
                    cout << "Added one chicken!" << endl;
                }
                else if (selection == '2'){
                    // automatically add "Cow" or keep as name?
                    cout << "Animal/name: ";
                    getline(cin, animal);
                    
                    cout << "Age: ";
                    cin >> years;
                    
                    cout << "Weight (lbs): ";
                    cin >> lbs;
                    
                    cout << "Gallons of milk (per day): ";
                    cin >> avgGal;
                    
                    // automatically start at zero?
                    cout << "Total gallons: ";
                    cin >> totalGal;
                    
                    cout << "Cost per unit?: ";
                    cin >> cost;
                    
                    cout << "Revenue per unit?: ";
                    cin >> revenue;
                    cin.ignore();
                    
                    Cow *newCow = new Cow(avgGal, totalGal, animal, years, lbs, cost, revenue);
                    
                    // passing what newCow is pointing at..
                    farm.addCow(*newCow);
                    
                    cout << "Added one cow!" << endl;
                }
                else if (selection != '1' || selection != '2'){
                    cout << "Invalid selection." << endl;
                }
            }
            while (selection != '1' && selection != '2');
            
        }
        else if(selection == '2'){
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
                cin >> removeAnimal;
                cin.ignore();
                
                if (farm.removeAnimal(removeAnimal))
                {
                    cout << "Success! Animal " << removeAnimal << " was removed!" << endl;
                }
                else
                {
                    cout << "Error! The animal was not deleted." << endl;
                }
            }
        }
        else if(selection == '3'){
            // COWS cout << "Animal\t\tAge\t\tWeight\t\tGallons\t\tRevenue\t\t  Cost\t\tProfit" << endl;
            // CHICKENS cout << "Animal\t\tAge\t\tWeight\t\t  Eggs\t\tUnits\t\tRevenue\t\t  Cost\t\tProfit" << endl;
            cout << "You selected number 3" << endl;
        }
        else if(selection == '4'){
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
