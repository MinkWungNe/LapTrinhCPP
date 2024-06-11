#ifndef H_partTime
#define H_partTime

#include <iostream>
#include "personType.h"
using namespace std;

class partTimeEmployee: public personType
{
    private:
        double payRate;
        double hoursWorked;

    public:
        void print() const; 
        double calculatePay() const;
        void setNameRateHours(string f, string l, double r, double h);
        partTimeEmployee(string f, string l, double r, double h);
};

void partTimeEmployee::print() const                                // In ra lương của Nhân viên
{
    cout << "Your salary is: " << calculatePay() << endl;
}

double partTimeEmployee::calculatePay() const
{
    return payRate*hoursWorked;
}

void partTimeEmployee::setNameRateHours(string f, string l, double r, double h)
{
    personType::SetName(f,l);
    payRate = r;
    hoursWorked = h;
}

partTimeEmployee::partTimeEmployee(string f, string l, double r, double h): personType(f,l)
{
    payRate = r;
    hoursWorked = h;
}

#endif