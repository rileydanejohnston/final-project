// Riley Johnston
// CS137
// Final project

#include "Animal.h"
#include "FarmAnimal.h"
#include "Cow.h"
#include <iostream>
using namespace std;

int main() {
    
    Cow mooMoo("Cow", "Moo-Moo", 5.5, 1500, 2.5, 5.25, 1023.2, 6.7);
    
    mooMoo.display();
    
    return 0;
}
