#include <iostream>
using namespace std;

#include "petType.h"
#include "dogType.h"

void callPrint(petType *p)
{
    p -> print();
}

int main()
{
    // Cơ bản
    petType Chi("Huynh Van Chi");
    Chi.print();
    cout << "===================================================" << endl;


    dogType vanlaChi("Huynh Van Chi", "Khong duoc thong minh");
    vanlaChi.print();
    cout << "===================================================" << endl;

    // Ứng dụng pointer vào class
    // Cách 1: gọi hàm print() của class qua pointer
    // Cách 2: biến cách trên thành 1 hàm có argument là con trỏ của class
    
    petType *ptpet;                                     // Tạo pointer cho class (biến động)
    ptpet = new petType("Huynh Van Chi");               // Cấp phát giá trị mới 
    ptpet -> print();                                   // Cách 1
    callPrint(ptpet);                                   // Cách 2
    cout << endl;

    ptpet = new petType("Van la Huynh Van Chi");        // Thay đổi giá trị mới
    ptpet -> print();                                   // Cách 1
    callPrint(ptpet);                                   // Cách 2
    cout << endl;  

}