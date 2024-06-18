#ifndef H_employee
#define H_employee

#include <iostream>
#include "personType.h"
using namespace std;

class employeeType:public personType
{
    private:
        long personID;
    
    public:
        virtual void print() const = 0;                             // virtual
        virtual double calculatePay() const = 0;
        void setID(long ID);
        long getID() const;
        employeeType(string f = " ", string l = " ", long ID = 0);
};

void employeeType::setID(long ID)
{
    personID = ID;
}

long employeeType::getID() const
{
    return personID;
}

employeeType::employeeType(string f, string l, long ID): personType(f,l)
{
    personID = ID;
}

#endif