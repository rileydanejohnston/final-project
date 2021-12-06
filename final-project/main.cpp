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
    
    farmAnmlPtr->display();
    
    cout << "7/2 = " << (7 / 2) << endl;
    
    return 0;
}
