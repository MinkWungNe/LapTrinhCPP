#include <iostream>
using namespace std;

int main()
{
    try
    {
        int sobichia, sochia, thuong;
        cout << "Nhap so bi chia: ";
        cin >> sobichia;
        cout << endl;
        cout << "Nhap so chia: ";
        cin >> sochia;
        cout << endl;

        // KiemTra
        string ErrorMsg = "Input sai kieu du lieu.";
        if (sochia == 0) throw sochia;
        else if (sochia < 0) throw string("So chia am (-)");
        else if (!cin) throw ErrorMsg;

        thuong = sobichia/sochia;
        cout << "Thuong = " << thuong << endl;
    }
    catch (int x)
    {
        cout << "So chia [" << x << "] khong chia duoc" << endl;
    }
    catch (string s)
    {
        cout << "Error: " << s << endl;
    }
    return 0;
}