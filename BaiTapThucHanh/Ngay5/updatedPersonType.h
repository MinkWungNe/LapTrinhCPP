#ifndef H_updatedPerson
#define H_updatedPerson

#include <iostream>
using namespace std;

class personType
{
    private:
        string firstName;
        string lastName;

    public:
        void print() const;
        void setName(string f, string l);
        personType& setFirstName(string f);
        personType& setLastName(string l);
        string getFirstName() const;
        string getLastName() const;
        personType(string f = "", string l ="");
};

void personType::print() const
{
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
}

void personType::setName(string f, string l)
{
    firstName = f;      // strcpy(firstName,f);
    lastName = l;       // strcpy(lastName,l);
}

personType& personType::setFirstName(string f)
{
    firstName = f;
    return *this;
}

personType& personType::setLastName(string l)
{
    lastName = l;
    return *this;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

personType::personType(string f, string l)
{
    firstName = f;
    lastName = l;
}

#endif