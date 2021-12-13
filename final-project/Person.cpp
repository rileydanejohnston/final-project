// Riley Johnston
// CS137
// Final project

#include "Person.h"
#include <iomanip>

Person::Person(const string &nm,
               const string &bday,
               const string &town       )
{
    setName(nm).
    setBirthday(bday).
    setHomeTown(town);
}

ostream& operator<<(ostream& output, const Person &right)
{
    output << "Name: "     << setw(30) << right.getName() << endl;
    output << "Birthday: " << setw(26) << right.getBirthday() << endl;
    output << "Hometown: " << setw(26)<< right.getHomeTown();
    return output;
}

Person& Person::setName(const string &nm)
{
    name = nm;
    return *this;
}

Person& Person::setBirthday(const string &bday)
{
    birthday = bday;
    return *this;
}

Person& Person::setHomeTown(const string &town)
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
