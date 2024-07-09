#include "divisionByZero.h"

int main()
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
    catch(divisionByZero divByZeroObj)      // Catch hàm khởi tạo từ throw và đặt một tên biến
    {
        cout << divByZeroObj.what() << endl; 
        // biến divByZeroObj sẽ truy xuất vào hàm what(), hàm what() của class divisionByZero có tác dụng return message
    }
    return 0;
}