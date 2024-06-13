#ifndef H_course
#define H_course

#include <iostream>
using namespace std;

class courseType
{
    private:
        string courseName;
        string courseNum;
        int courseCredits;
    public:
        void setCourseInfo(string name, string num, int cre);
        void print(ostream);
        string getCourseNumber();
        string getCourseName();
        courseType();
        courseType(string name, string num, int cre);
};

void courseType::setCourseInfo(string name, string num, int cre)
{
    courseName = name;
    courseNum = num;
    courseCredits = cre;
}

void courseType::print(ostream)
{
    
}

string courseType::getCourseNumber()
{
    return courseNum;
}

string courseType::getCourseName()
{
    return courseName;
}

courseType::courseType()
{
    courseName = "";
    courseNum = "";
    courseCredits = 0;
}

courseType::courseType(string name, string num, int cre)
{
    courseName = name;
    courseNum = num;
    courseCredits = cre;
}
#endif