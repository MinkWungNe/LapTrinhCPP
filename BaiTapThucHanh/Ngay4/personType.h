#ifndef H_Person
#define H_Person
#include <string>
#include <iostream>
using namespace std;


class personType
{
    private:
        string firstName;
        string lastName;
    
    public:
        void print() const;
        void SetName(string f, string l);
        string getFirstName() const;
        string getLastName() const;
        personType(string = "" ,string = "");
};

void personType::print() const
{
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
}

void personType::SetName(string f, string l)
{
    firstName = f;      // strcpy(firstName,f);
    lastName = l;       // strcpy(lastName,l);
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