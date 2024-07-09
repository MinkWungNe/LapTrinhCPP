#ifndef H_DivisionByZero
#define H_DivisionByZero

#include <iostream>
#include <string>
using namespace std;

class divisionByZero
{
    private:
        string message;

    public:
        divisionByZero():message("day la phep chia cho [0]") {};

        divisionByZero(string s):message(s) {};

        string what() { return message; }

};


#endif