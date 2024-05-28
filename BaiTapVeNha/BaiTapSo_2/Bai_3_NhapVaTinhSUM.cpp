#include <iostream>
using namespace std;

int main()
{
    int hang , cot , Sum= 0;
    int Matran[3][3];

    cout << "Nhap cac phan tu cua mang: " << endl;
    for (hang = 0 ; hang < 3; ++hang )
    {
        for (cot = 0; cot <3; ++cot )
        {
            cout << "Hang [" << hang + 1 << "]" << " cot [" << cot + 1 << "]: ";
            cin >> Matran[hang][cot];
        }
    }
    
    for (hang = 0 ; hang < 3; ++hang )
    {
        for (cot = 0; cot <3; ++cot )
        {
            cout << Matran[hang][cot] << " ";
        }
        cout << endl;
    }

    for (hang = 0 ; hang < 3; ++hang )
    {
        for (cot = 0; cot <3; ++cot )
        {
            Sum += *(*(Matran + hang)+ cot);
        }
    }
    cout << Sum << endl;
}