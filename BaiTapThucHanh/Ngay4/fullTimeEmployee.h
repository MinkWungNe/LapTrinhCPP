#ifndef H_fullTime
#define H_fullTime

#include <iostream>
#include "employeeType.h"
using namespace std;

class fullTimeEmployee: public employeeType
{
    private:
        double empSalary;
        double empBonus;
    public:
        void set(string f, string l, long ID, double salary, double bonus);
        void setSalary(double salary);
        double getSalary();
        void setBonus(double bonus);
        double getBonus();
        void print() const;
        double calculatePay() const;
        fullTimeEmployee(string f = " ", string l = " ", long ID = 0, double salary = 0, double bonus = 0);
};

void fullTimeEmployee::set(string f, string l, long ID, double salary, double bonus)
{
    SetName(f,l);
    setID(ID);
    empSalary = salary;
    empBonus = bonus;
}

void fullTimeEmployee::setSalary(double salary)
{
    empSalary = salary;
}

double fullTimeEmployee::getSalary()
{
    return empSalary;
}

void fullTimeEmployee::setBonus(double bonus)
{
    empBonus = bonus;
}

double fullTimeEmployee::getBonus()
{
    return empBonus;
}

void fullTimeEmployee::print() const
{
    personType::print();
    cout << "ID: " << getID() << endl;
    cout << "salary: " << calculatePay() << endl;
}

double fullTimeEmployee::calculatePay() const
{
    return (empSalary + empBonus);
}

fullTimeEmployee::fullTimeEmployee(string f, string l, long ID, double salary, double bonus):employeeType(f,l,ID)
{
    empSalary = salary;
    empBonus = bonus;
}
#endif