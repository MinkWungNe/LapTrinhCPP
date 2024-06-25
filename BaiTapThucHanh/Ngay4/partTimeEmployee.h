#ifndef H_partTime
#define H_partTime

#include <iostream>
#include "employeeType.h"
using namespace std;

class partTimeEmployee: public employeeType
{
    private:
        double payRate;
        double hoursWorked;

    public:
        void set(string f, string l, long ID, double rate, double hours);
        double calculatePay() const;
        void setPayRate(double rate);
        double getPayRate();
        void setHoursWorked(double hours);
        double getHoursWorked();
        void print() const;
        partTimeEmployee(string f = "", string l = "", long ID = 0,double rate = 0,double hours = 0);
};

void partTimeEmployee::set(string f, string l, long ID, double rate, double hours)
{
    SetName(f,l);
    setID(ID);
    payRate = rate;
    hoursWorked = hours;
}

double partTimeEmployee::calculatePay() const
{
    return hoursWorked*payRate;
}

void partTimeEmployee::setPayRate(double rate)
{
    payRate = rate;
}

double partTimeEmployee::getPayRate()
{
    return payRate;
}

void partTimeEmployee::setHoursWorked(double hours)
{
    hoursWorked = hours;
}

double partTimeEmployee::getHoursWorked()
{
    return hoursWorked;
}

void partTimeEmployee::print() const
{
    personType::print();
    cout << "ID: " << getID() << endl;
    cout << "Salary: " << calculatePay() << endl;
}

partTimeEmployee::partTimeEmployee(string f, string l, long ID, double rate, double hours):employeeType(f,l,ID)
{
    payRate = rate;
    hoursWorked = hours;
}
#endif