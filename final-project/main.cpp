// Riley Johnston
// CS137
// Final project

#include "Animal.h"
#include "Cow.h"
#include <iostream>
using namespace std;

int main() {
    
    Animal pet1(5.5, "Cow");
    Cow pet2(7.5, 1.8, 5.5, 5000.5, "Donald", 10, "Cow");
    
    pet2.produce(10);
    cout << pet2.getTotalGal() << endl;
    
    /*
    cout << "pet2 output: " << pet2.getAvgMilkOutput() << endl;
    cout << "pet2 cost: " << pet2.getCostPerGal() << endl;
    cout << "pet2 price: " << pet2.getPricePerGal() << endl;
    cout << "pet2 name: " << pet2.getName() << endl;
    cout << "pet2 age: " << pet2.getAge() << endl;
    cout << "pet2 animal: " << pet2.getAnimal() << endl;
    
    cout << "pet1 age: " << pet1.getAge() << endl;
    cout << "pet1 animal: " << pet1.getAnimal() << endl;
    */
    return 0;
}
