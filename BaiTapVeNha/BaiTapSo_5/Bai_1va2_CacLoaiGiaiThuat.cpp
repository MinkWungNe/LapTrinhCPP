#include <iostream>
#include <cstring>
using namespace std;

#define MAX 7

void BubbleSort(char arr[][MAX], int n)         // Bubble Sort mảng CHAR 2 chiều [] là số chuỗi, [MAX] là chiều dài của mỗi chuỗi.
{
    for (int i = 0; i < n - 1; i++)             // n - 1 vì thứ tự mảng bắt đầu từ 0,1,2,... nên kích thước mảng là 8 NHƯNG vị trí cuối cùng của mảng là 7
    {
        for (int j = i + 1; j < n; j++)    
        {
            if (strcmp(arr[i], arr[j]) > 0)     // chữ trong arr[i] đứng sau arr[j] thì trả giá trị SỐ DƯƠNG mà SỐ DƯƠNG > 0 nên đk là true ---> Tên ở vị trí i đứng sau tên ở vị trí j thì đổi chỗ
            {
                char temp[MAX];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

void SelectionSort(char ten[][MAX], int n)      // Tìm số NHỎ NHẤT và đưa lên đầu mảng
{
    for (int i = 0; i < n - 1; i++)             // Dò toàn mảng (Khởi đầu từ vị trí 0)
    {
        int min = i;                            // Cho số nhỏ nhất ở vị trí i (Khởi đầu là 0)
        for (int j = i + 1; j < n; j++)         // Lấy số kế tiếp (Khởi đầu từ vị trí i+1 là 1)
        {
            if (strcmp(ten[j], ten[min]) < 0)   // Tên ở vị trí j đứng sau tên ở vị trí min thì đặt min mới
            {
                min = j;                        // (1)
            }
        }
        if (min != i)                           // Xét nếu vị trí min hồi nãy khác i thì đổi chỗ
        {                                       // VD: ở trên min = 0, sau khi xét ten[j] < ten[min] thì min = 1 (vì j khởi đầu là i+1 là 1). Mà bây giờ min = 1 tức khác với i = 0 --> Đổi chỗ vì tìm được số nhỏ nhất mới
            char temp[MAX];
            strcpy(temp, ten[i]);
            strcpy(ten[i], ten[min]);
            strcpy(ten[min], temp);
        }
        // Nếu vị trí min vẵn bằng vị trí i thì thực hiện tiếp for
    }
}

void InsertionSort(char ten[][MAX], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        char temp[MAX];                              // Biến tạm
        strcpy(temp, ten[i]);                        // Lưu tên ở vị trí i vào biến tạm
        int j = i - 1;                               // vị trí j ở vị trí trước vị trí i (VD: i = 1 thì j = 0)
        while (j >= 0 && strcmp(ten[j], temp) > 0) 
        {
            strcpy(ten[j + 1], ten[j]);              // Lùi mảng qua 1 vị trí (Bắt đầu từ vị trí có thể chèn)
            j--;                                     // (Bây giờ j = -1)
        }                                            // (j bây giờ ko còn đạt đk để tiếp tục while, thoát vòng lặp)
        strcpy(ten[j + 1], temp);                    // Chèn giá trị vào vị trí j = 0 (vì j đang -1 được + 1 trong code này)
    }
}

void Choose(char arr[][MAX],int n)                  // KHÔNG GHI CÁI NÀY
{
    int Input;
    cout << "Chon giai thuat de sap xep: " << endl;
    cout << "1. BubbleSort" << endl << "2. SelectionSort" << endl << "3. InsertionSort" << endl;
    cout << "Ban chon: ";
    cin >> Input;

    switch (Input) 
    {
        case 1:
            BubbleSort(arr, n);
            break;
        case 2:
            SelectionSort(arr, n);
            break;
        case 3:
            InsertionSort(arr, n);
            break;
        default:
            cout << "Phuong thuc chon khong dung... (chon 1 trong 3 giai thuat tren)" << endl;
    }
}

int Search(char arr[][MAX], int n)
{
    char tenCanTim[MAX]; 
    cout << "Ten can tim kiem: ";
    cin >> tenCanTim;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i], tenCanTim) == 0) return i; // Tìm thấy thì trả giá trị i về function
    }
    return -1; // Không tìm thấy thì trả -1 về function (Sau khi nó tìm không thấy thì mới trả -1)
}

int main()
{
    char ten[][MAX] = { "Linh", "Yen", "Hong","Dao", "Mai", "Truc","Mong","Hung"};
    int n = sizeof(ten) / sizeof(ten[0]);

    // Câu 1: sắp xếp tên theo các giải thuật
    // BubbleSort(ten, n);                   GHI CÁI NÀY NÀY
    //SelectionSort(ten,n);
    //InsertionSort(ten,n);

    Choose(ten, n);                                 // Chọn 1 trong 3 giải thuật trên (KHÔNG GHI CÁI NÀY)
    // In mảng sau khi sắp xếp
    cout << endl << "Mang sau khi sap xep: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << ten[i] << " ";
    }
    cout << endl;

    // Câu 2:
    int KetQua = Search(ten,n);
    if (KetQua != -1)
    {
        cout << "Da tim thay ten o vi tri " << KetQua + 1 << endl;
    }
    else 
    {
        cout << "Khong tim thay ket qua tim kiem. " << endl;
    }

    return 0;
}