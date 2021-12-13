// Riley Johnston
// CS137
// Final project

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
    friend ostream& operator<<(ostream&, const Person&);
private:
    string name;
    string birthday;
    string homeTown;
public:
    Person(const string& = "Alex",
           const string& = "1/1/1991",
           const string& = "Austin, TX"     );
    
    Person& setName(const string&);
    Person& setBirthday(const string&);
    Person& setHomeTown(const string&);
    
    string getName() const;
    string getBirthday() const;
    string getHomeTown() const;
    
    void display() const;
};

#endif
