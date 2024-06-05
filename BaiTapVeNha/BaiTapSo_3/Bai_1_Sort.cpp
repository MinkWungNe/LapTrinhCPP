#include <iostream>
#include <vector>
using namespace std;

// Hàm Bubble Sort để lát gọi ở hàm main()
void BubbleSort(vector <int> &InputList, int length)
{
    for (int i = 0; i < length - 1; i++)             // Kiểm tra nếu i bé hơn chiều dài của dãy số
    {
        for (int j = i + 1; j < length; j++)
        {
            if (InputList[i] > InputList[j])         // Nếu GIÁ TRỊ của số đầu > số sau
            {
                int tmp = InputList[i];              // Biến tạm để chứa i 
                InputList[i] = InputList[j];         // i rỗng chứa j
                InputList[j] = tmp;                  // j rỗng chứa biến tạm (i)
            }
        }
        
    }
}

int main()
{
    // Task 1: Input sài Vector
    int Index = 0;                                             //Optional (Biến số thứ tự để trang trí)
    int length = 0;                                            // Biến chiều dài để lát lấy chiều dài dãy số
    int Input;                                                 // Bién Input để lát nhập số thì số nó lưu tạm vào đây
    vector <int> InputList;                                    // Vector để lưu dãy số, Vector có thể tuỳ ý thay đổi kíck thước cho khỏi tốn tài nguyên

    cout << "Nhap so vao danh sach de sap xep:              (Nhap 999 de ngung nhap)" << endl;
    while (Input != 999)                                       // Kiểm tra xem nhập có khác 999 không
    {
        cout << Index + 1 << ". ";                             //Optional (Hiển thị số thứ tự khi nhập VD: 1._    2._    )
        cin >> Input;                                          // Nhập số thì nó lưu vào đây này :D
        if (Input != 999)                                      // Khác số 999 mới cho vào dãy số, để tránh nhập mẹ nó 999 vào dãy thì ăn buồi
        {
            InputList.push_back(Input);
        }
        Index++;                                               //Optional (tăng số Index cho đẹp)
    }
    length = InputList.size();                                 // Lấy chiều dài của dãy số (VD: nhập 5 số thì chiều dài = 5)

    cout << endl << "====================================================================================================" << endl << "Chieu dai cua danh sach can sap xep: " << length << endl;

    // Task 2: Hàm Bubble Sort
    BubbleSort(InputList, length);

    // Task 3: In dãy số đã sắp xếp
    cout << endl << "====================================================================================================" << endl << "Danh sach da sap xep: ";
    for (int i = 0; i < length; i++)                           // In tất cả các số đã được sắp xếp
    {
        cout << InputList[i] << " ";
    }
    cout << endl << endl;
}

