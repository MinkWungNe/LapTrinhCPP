#ifndef H_Date
#define H_Date

#include <iostream>
using namespace std;

class dateType
{
    private:
        int dDay;
        int dMonth;
        int dYear;

    public:
        void setDate(int d,int m,long int y);
        int getDay() const;
        int getMonth() const;
        int getYear() const;
        void printDate() const;
        dateType(int d, int m,long int y);
        dateType();
};

void dateType::setDate(int d, int m,long int y)
{
    dDay = d;
    dMonth = m;
    dYear = y;
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getMonth() const
{
    return dMonth;
}

int dateType::getYear() const
{
    return dYear;
}

void dateType::printDate() const
{
    cout << "Date: " << dDay << " / " << dMonth << " / " << dYear << endl;
}

dateType::dateType(int d, int m,long int y)
{
    dDay = d;
    dMonth = m;
    dYear = y;
}

dateType::dateType()
{
    dDay = 1;
    dMonth = 1;
    dYear = 1900;
}
#endif