// Riley Johnston
// CS137
// Final project

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    string birthday;
    string homeTown;
public:
    Person(string = "Alex", string = "1/1/1991", string = "Austin, TX");
    
    Person& setName(string);
    Person& setBirthday(string);
    Person& setHomeTown(string);
    
    string getName() const;
    string getBirthday() const;
    string getHomeTown() const;
    
    void display() const;
};

#endif
