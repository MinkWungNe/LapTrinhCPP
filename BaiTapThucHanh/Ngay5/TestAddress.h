#ifndef H_address
#define H_address

#include <iostream>
using namespace std;

class testAddress
{
    private:
        int x;
    
    public:
        void setX(int x);
        void print() const;
        int& addressOfX();          // trả về địa chỉ của biến 
};

void testAddress::setX(int X)
{
    x = X;
}

void testAddress::print() const
{
    cout << x << endl;
}

int& testAddress::addressOfX()
{
    return x;
}
#endif