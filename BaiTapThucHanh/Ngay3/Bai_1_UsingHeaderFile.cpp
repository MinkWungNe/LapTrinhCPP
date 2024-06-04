#include <iostream>
#include "RectangleLibrary.h"
#include "BoxLibrary.h"
using namespace std;

int main()
{
    rectangleType HinhChuNhat;
    HinhChuNhat.print();

    boxType HinhHop(5, 10, 15);
    HinhHop.print();
}