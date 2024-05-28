#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int TongGavaHeo, TongChan;
    cout << "Nhap tong so Ga va Heo: ";
    cin >> TongGavaHeo;
    cout << "Nhap tong so Chan (So chan): ";
    cin >> TongChan;

    if (TongChan % 2 != 0 || TongGavaHeo < 0 ) {
        cout << "Tong so chan khong hop le. Vui long nhap so chan la so nguyen duong." << endl;
        return 1;
    }
    
    int SoGa = (4*TongGavaHeo - TongChan)/2;
    int SoHeo = (TongChan - 2*TongGavaHeo)/2;
    if (SoGa < 0 || SoHeo < 0)
    {
        cout <<"Tong so chan khong hop le. Vui long nhap so chan la so nguyen duong." << endl;
        return 1;
    }
    cout << "Ket qua: " << SoGa << " Con Ga va " << SoHeo << " Con Heo." << endl;
    return 0;
}