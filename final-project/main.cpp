// Riley Johnston
// CS137
// Final project

#include "Animal.h"
#include "AnimalFigures.h"
#include "Cow.h"
#include <iostream>
using namespace std;

int main() {
    
    Cow mooMoo(1.1, 2.2, "Cow", 5.5, 1500, 2.5, 5.25);
    
    mooMoo.display();
    
    return 0;
}
