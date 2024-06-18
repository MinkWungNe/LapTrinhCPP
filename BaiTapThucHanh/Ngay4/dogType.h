#ifndef H_dog
#define H_dog

#include <iostream>
#include "petType.h"
using namespace std;

class dogType: public petType
{
    private:
        string breed;
    
    public:
        void print();
        dogType(string n, string b);
};

void dogType::print()
{
    petType::print();
    cout << "Breed: " << breed << endl;
}

dogType::dogType(string n, string b):petType(n)
{
    breed = b;
}

#endif