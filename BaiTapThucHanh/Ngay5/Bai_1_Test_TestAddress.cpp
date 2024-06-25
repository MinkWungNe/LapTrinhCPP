#include <iostream>
#include "TestAddress.h"
using namespace std;

int main()
{
    testAddress a;
    int &y = a.addressOfX();
    a.setX(50);                 // vì lần này ko có hàm khởi động nên đặt biến a ở trên chỉ được khai báo. Xuống dưới mới dùng hàm setX() để đặt giá trị cho x
    cout << "x in class testAddress: "; a.print();
    cout << endl;
    y = 25;
    cout << "After y = 25, x in class testAddress: "; a.print();
    cout << endl;
    return 0;
}