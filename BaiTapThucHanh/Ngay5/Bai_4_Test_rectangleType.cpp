#include "RectangleLibrary.h"

int main()
{
    rectangleType Hinh1(5,5);
    rectangleType Hinh2(2,2);

    rectangleType Hinh3;

    Hinh3 = Hinh1 + Hinh2;

    Hinh1.print();
    Hinh2.print();
    Hinh3.print();

    if (Hinh1 == Hinh2)
    {
        cout << "Hinh1 bang Hinh2!" << endl;
    }
    else cout << "Hinh1 KHONG BANG Hinh2!" << endl;
}