#ifndef H_personInfo
#define H_personInfo

#include <iostream>
#include "personType.h"
#include "dateType.h"
using namespace std;

class personalInfo: public personType,dateType
{
    private:
        personType name;
        dateType bDay;
        int personID;

    public:
        void setPersonalInfo(string f, string l, int d, int m,long int y, int ID);
        void printPersonalInfo() const;
        personalInfo(string f, string l, int d, int m,long int y, int ID);
};

void personalInfo::setPersonalInfo (string f, string l, int d, int m,long int y, int ID)
{
    name.SetName(f,l);
    bDay.setDate(d,m,y);
    personID = ID;
}

void personalInfo::printPersonalInfo() const
{
    name.print();
    cout << "Date of Birth: ";
    bDay.printDate();
    cout << "ID: " << personID << endl;
}

personalInfo::personalInfo(string f, string l,int d, int m,long int y, int ID):name(f,l),bDay(d,m,y)
{
    personID = ID;
}
#endif