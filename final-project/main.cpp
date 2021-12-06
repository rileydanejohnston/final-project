// Riley Johnston
// CS137
// Final project

#include "FarmAnimal.h"
#include "Cow.h"
#include "Chicken.h"
#include <iostream>
using namespace std;

int main() {
    
    Cow mooMoo(1.1, 2.2, "Cow", 5.5, 1500, 2.5, 5.25);
    FarmAnimal *farmAnmlPtr = &mooMoo;
    
    cout << "Animal\tAge\t\tWeight\tCost\tRev\tProfit\t" << endl;
    farmAnmlPtr->display();
    
    
    return 0;
}
