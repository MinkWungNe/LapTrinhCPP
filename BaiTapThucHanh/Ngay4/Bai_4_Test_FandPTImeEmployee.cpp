#include <iostream>
#include "fullTimeEmployee.h"
#include "partTimeEmployee.h"
using namespace std;

int main()
{
    fullTimeEmployee newEMP("Nguyen","Van Dung", 75, 56000, 5700);
    partTimeEmployee tempEMP("Bill", "Neilson", 275, 15.50, 57);
    newEMP.print();
    cout << endl;
    tempEMP.print();
    cout << endl;
}