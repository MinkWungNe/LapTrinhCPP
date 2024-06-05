#include <iostream>
#include <vector>
using namespace std;


void BubbleSort(vector <int> &InputList, int length)
{
    for (int i = 0; i < length - 1; i++)             // Kiểm tra nếu i bé hơn chiều dài của dãy số
    {
        for (int j = i + 1; j < length; j++)
        {
            if (InputList[i] > InputList[j])         // Nếu GIÁ TRỊ của số đầu > số sau
            {
                int tmp = InputList[i]; 
                InputList[i] = InputList[j];
                InputList[j] = tmp;
            }
        }
        
    }
}

int main()
{
    // Task 1: Input sài Vector
    int Index = 0;                                             //Optional
    int length = 0;
    int Input;
    vector <int> InputList;

    cout << "Nhap so vao danh sach de sap xep:              (Nhap 999 de ngung nhap)" << endl;
    while (Input != 999)
    {
        cout << Index + 1 << ". ";                             //Optional
        cin >> Input;
        if (Input != 999)
        {
            InputList.push_back(Input);
        }
        Index++;                                               //Optional
    }
    length = InputList.size();

    cout << endl << "====================================================================================================" << endl << "Chieu dai cua danh sach can sap xep: " << length << endl;

    // Task 2: Hàm Bubble Sort
    BubbleSort(InputList, length);

    // Task 3: In dãy số đã sắp xếp
    cout << endl << "====================================================================================================" << endl << "Danh sach da sap xep: ";
    for (int i = 0; i < length; i++)
    {
        cout << InputList[i] << " ";
    }
    cout << endl << endl;
}

