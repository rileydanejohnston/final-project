// Riley Johnston
// CS137
// Final project

#include "Person.h"
#include <iomanip>

Person::Person(string nm, string bday, string town)
{
    setName(nm).
    setBirthday(bday).
    setHomeTown(town);
}

Person& Person::setName(string nm)
{
    name = nm;
    return *this;
}

Person& Person::setBirthday(string bday)
{
    birthday = bday;
    return *this;
}

Person& Person::setHomeTown(string town)
{
    homeTown = town;
    return *this;
}

string Person::getName() const {
    return name;
}

string Person::getBirthday() const {
    return birthday;
}

string Person::getHomeTown() const {
    return homeTown;
}

void Person::display() const {
    cout << "Name: "     << setw(30) << getName() << endl;
    cout << "Birthday: " << setw(26) << getBirthday() << endl;
    cout << "Hometown: " << setw(26)<< getHomeTown() << endl;
}
