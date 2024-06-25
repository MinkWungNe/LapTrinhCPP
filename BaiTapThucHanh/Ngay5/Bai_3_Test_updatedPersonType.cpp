#include "updatedPersonType.h"

int main()
{
    personType student1("Angela", "Smith");
    personType student2;
    personType student3;

    cout << "Student 1: ";
    student1.print();
    cout << endl;

    student2.setFirstName("Shelly").setLastName("Malik");
    cout << "Student 2: ";
    student2.print();
    cout << endl;

    student3.setFirstName("Chelsea");
    cout << "student 3: ";
    student3.print();
    cout << endl;

    student3.setLastName("Tomek");
    cout << "student 3: ";
    student3.print();
    cout << endl;

    return 0; 
}