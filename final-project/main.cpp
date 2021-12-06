// Riley Johnston
// CS137
// Final project

#include "FarmAnimal.h"
#include "Cow.h"
#include "Chicken.h"
#include <iostream>
using namespace std;

int main() {
    
    Cow mooMoo(1.1, 2.2, "Cow", 5.5, 15, 2.5, 5.25);
    Chicken cocky(1, 12, 200, "Chicken", 1.75, 6.3, 1.45, 3.67);
    FarmAnimal *cowPtr = &mooMoo;
    FarmAnimal *chickenPtr = &cocky;
    
    cout << "Animal\t\tAge\t\tWeight\t\tGallons\t\tRevenue\t\t  Cost\t\tProfit" << endl;
    cowPtr->display();
    cowPtr->produce(10);
    cowPtr->produce(10);
    cowPtr->display();
    cout << endl;
    cout << "Animal\t\tAge\t\tWeight\t\t  Eggs\t\tUnits\t\tRevenue\t\t  Cost\t\tProfit" << endl;
    chickenPtr->display();
    return 0;
}
