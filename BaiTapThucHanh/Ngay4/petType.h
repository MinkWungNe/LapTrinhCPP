#ifndef H_pet
#define H_pet

#include <iostream>
using namespace std;

class petType
{
    private:
        string name;
    
    public:
        void print();
        petType(string n = " ");
};

void petType::print()
{
    cout << "Pet's name: " << name << endl;
}

petType::petType(string n)
{
    name = n;
}
#endif