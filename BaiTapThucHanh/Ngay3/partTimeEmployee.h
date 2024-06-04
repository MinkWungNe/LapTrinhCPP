#ifndef H_partTime
#define H_partTime

#include <iostream>
#include "personType.h"
using namespace std;

class partTimeEmployee
{
    private:
        double payRate;
        double hoursWorked;

    public:
        void print() const; 
        double calculatePay() const;
        void setNameRateHours(string f, string l, double r, double h);
        partTimeEmployee(string = "", string = "", double = 0, double = 0);
};

void partTimeEmployee::print() const
{
    cout << "Pay" << endl;
}

double partTimeEmployee::calculatePay() const
{

}

void partTimeEmployee::setNameRateHours(string f, string l, double r, double h)
{

}

partTimeEmployee::partTimeEmployee(string = "", string = "", double = 0, double = 0)
{

}

#endif