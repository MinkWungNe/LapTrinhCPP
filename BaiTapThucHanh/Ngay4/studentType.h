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
    
}

void studentType::print(ostream, double)
{

}

int studentType::getCourseEnrolled()
{

}

double studentType::getGPA()
{

}

double studentType::billingAmount(double)
{

}

void studentType::sortCourse()
{

}

studentType::studentType()
{
    
}
#endif

