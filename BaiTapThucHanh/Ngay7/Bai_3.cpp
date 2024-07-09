#include "divisionByZero.h"

void PhepChia() // throw (divisionByZero) sẽ bị sai vì ISO C++17 ko còn hỗ trợ throw dynamic
{
    int sobichia, sochia, thuong;
    try
    {
        cout << "Nhap so bi chia: ";
        cin >> sobichia;
        cout << "Nhap so chia: ";
        cin >> sochia;
        
        if (sochia == 0) throw divisionByZero();
        thuong = sobichia / sochia;
        cout << "Thuong = " << thuong << endl;
    }
    catch(divisionByZero)      // Catch hàm khởi tạo từ throw và đặt một tên biến
    {
        throw;
    }
}

int main()
{
    try 
    {
        PhepChia();
    }
    catch (divisionByZero Obj)
    {
        cout << Obj.what() << endl;
    }
    return 0;
}