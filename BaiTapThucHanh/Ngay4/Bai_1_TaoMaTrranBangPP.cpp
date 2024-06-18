#include <iostream>
using namespace std;

int main()
{
    // Task 1: Nhập hàng và cột nguyên dương
    int n,m = 0;
    while (n <= 0 || m <= 0)
    {
        cout << "Nhap so hang m: ";
        cin >> m;
        cout << "Nhap so cot n: ";
        cin >> n;
    }
    cout << "Ban da chon [" << n << "] hang va [" << m << "] cot." << endl;

    // Task 2: Khởi tạo ma trận với hàng và cột được nhập
    double **MaTran = new double* [m];                          // Khởi tạo ma số hàng
    for (int i = 0; i < n; i++)
    {
        MaTran[i] = new double [n];                             // Mỗi hàng khởi tạo n cột
    }

    for (int i = 0; i < m; i++)                                 // Xét từng hàng
    {
        cout << "Nhap " << m << " so cho hang [" << i + 1 << "]: ";
        for (int j = 0; j < n; j++)                             // Mỗi cột sẽ nhặp vào 1 giá trị
        {
            cin >> MaTran[i][j]; 
        }
    }

    // Task 3: In ma trận
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << MaTran[i][j] << " ";
        } 
        cout << endl;
    }
}