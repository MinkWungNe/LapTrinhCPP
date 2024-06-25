#ifndef H_thisP
#define H_thisP

#include <iostream>
using namespace std;

class thisPointerClass 
{
    private:
        int x,y,z;

    public:
        void set(int a, int b, int c);
        void print() const;
        thisPointerClass updateXYZ();
        thisPointerClass(int a = 0, int b = 0, int c = 0);
};

void thisPointerClass::set(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void thisPointerClass::print() const
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}

thisPointerClass thisPointerClass::updateXYZ()
{
    x = x * 2;
    y = y + 2;
    z = z * z;
    return *this;
}

thisPointerClass::thisPointerClass(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

#endif