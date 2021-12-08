// Riley Johnston
// CS137
// Final project

#include "FarmAnimal.h"
#include "Cow.h"
#include "Chicken.h"
#include "Person.h"
#include "Farmer.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    Farmer man("Animals", 3, 5, 5.5, "Riley Johnston", "4/3/1991", "Albuquerque, NM");
    man.display();
    
    Cow mooMoo2(4.4, 3.3, "Cow", 2.64, 16, 4.4, 8.8);
    Chicken cocky2(16, 12, 50, "Chicken", 1.1, 5.9, 2.87, 3.49);
    
    vector<FarmAnimal*> animals;
    
    char selection = 0;
    
    do {
        // print menu
        cout << endl;
        cout << "Farm Menu" << endl;
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
                
                if (selection == '1'){
                    Chicken *cocky = new Chicken(1, 12, 200, "Chicken", 1.75, 6.3, 1.45, 3.67);
                    animals.push_back(cocky);
                    cout << "Added one chicken!" << endl;
                }
                else if (selection == '2'){
                    Cow *mooMoo = new Cow(1.1, 2.2, "Cow", 5.5, 15, 2.5, 5.25);
                    animals.push_back(mooMoo);
                    cout << "Added one cow!" << endl;
                }
                else if (selection != '1' || selection != '2'){
                    cout << "Invalid selection." << endl;
                }
            }
            while (selection != '1' && selection != '2');
            
        }
        else if(selection == '2'){
        }
        else if(selection == '3'){
            // COWS cout << "Animal\t\tAge\t\tWeight\t\tGallons\t\tRevenue\t\t  Cost\t\tProfit" << endl;
            // CHICKENS cout << "Animal\t\tAge\t\tWeight\t\t  Eggs\t\tUnits\t\tRevenue\t\t  Cost\t\tProfit" << endl;
            cout << animals.size() << endl;
            for (int i = 0; i < animals.size(); ++i){
                animals[i]->display();
            }
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
    
    
    // free memory
    for (int i = 0; i < animals.size(); ++i){
        delete animals[i];
    }
    
    return 0;
}
