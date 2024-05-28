#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    string DayInput;
    cout << "Nhap day Nhi phan: ";
    cin >> DayInput;
    int Size = DayInput.length();
    int DayChuyenDoi[Size];
    int S = 0;
    int Sum = 0;
    // Chuyền Input từ chuỗi vào Mảng
    for (int i = 0; i < Size; ++i) 
    {
        if (DayInput[i] >= '0' && DayInput[i] <= '1') 
        {
            DayChuyenDoi[i] = DayInput[i] - '0';
        }
    }

    // Chuyển đổi Nhị Phân sang Thập Phân
    for (int i = 0; i < Size; i++)
    {
        S = DayChuyenDoi[i]*pow(2,Size - i - 1) ;
        Sum += S;
    }

    cout << "Ket qua: " << Sum << endl;
    return 0;
}