#ifndef H_student
#define H_student

#include <iostream>
#include "personType.h"
#include "courseType.h"
using namespace std;

class studentType: public personType, courseType
{
    private:
        int sID;
        int numberOfCourse;
        bool isTuitionPaid;
        courseType coursesEnrolled[6];
        char courseGrade[6];

    public:
        void setInfo(string f, string l, int ID, int numOfCourse, bool isPaid, courseType courses[], char grade[]);
        void print(ostream, double);
        int getCourseEnrolled();
        double getGPA();
        double billingAmount(double);
        void sortCourse();
        studentType();
};

void studentType::setInfo(string f, string l, int ID, int numOfCourse, bool isPaid, courseType courses[], char grade[])
{
    personType::SetName(f,l);
    sID = ID;
    numberOfCourse = numOfCourse;
    isTuitionPaid = isPaid;
    
    // Điền giá trị vào 2 mảng coursesEnrolled và courseGrade
    for (int i = 0; i < numOfCourse; ++i)
    {
        coursesEnrolled[i] = courses[i];
        courseGrade[i] = grade[i];
    }
}

void studentType::print(ostream, double tuitionRate)
{

}

int studentType::getCourseEnrolled()
{
    return numberOfCourse;
}

double studentType::getGPA()
{
    int SUM;
    for (int i = 0; i < numberOfCourse; i++)
    {
        SUM += courseGrade[i];
    }
    
    return SUM / numberOfCourse;
}

double studentType::billingAmount(double tuitionRate)
{

}

void studentType::sortCourse()
{

}

studentType::studentType()
{
    sID = 0;
    numberOfCourse = 0;
    bool isTuitionPaid = false;
    char courseGrade[6] = {"F"};

}
#endif

