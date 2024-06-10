#include <iostream>
using namespace std;

void HaiChieuThanhMotChieu_Alternate(int Hang, int Cot)             // CÁI NÀY KHÔNG GHI, CÁI NÀY LÀ TẠO MẢNG "2 Chiều nhu 1 Chiều" xong nhập input
{
    int A[Hang*Cot];
    int iTam = 0;
    int jTam = 0;
    for (int i = 0; i < Hang*Cot; i++)
    {
        if(i % Cot == 0 ) { iTam++; }
        jTam++;
        if (jTam == Cot + 1) {jTam = 1;}
        cout << "Hang [" << iTam << "] Cot [" << jTam << "]: ";
        cin >> A[i];
    }

    for (int i = 0; i < Hang; i++)
    {
        for (int j = 0; j < Cot; j++)
        {
            cout << A[i*Cot + j] << " ";
        }
        cout << endl;
    }
}

void HaiChieuThanhMotChieu(int Hang, int Cot)
{
    int a[Hang][Cot];                       // Mảng 2 chiều
    int b[Hang*Cot];                        // Mảng 1 chiều để lát làm việc
    int maxCot;                             // KHÔNG GHI CÁI NÀY
    for (int i = 0; i < Hang; i++)          // Nhập dữ liệu vào mảng 2 chiều
    {
        for (int j = 0; j < Cot; j++)
        {
            cout << "Hang [" << i + 1 << "] Cot [" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }

    // Biến mảng "2 Chiều" thành "1 Chiều"
    for (int i = 0; i < Hang; i++)
    {
        for (int j = 0; j < Cot; j++)
        {
            b[i*Cot + j] = a[i][j];
        }
    }

    for (int i = 0; i < Hang*Cot; i++)
    {
        if (i % Cot != Cot - 1)             // KHÔNG GHI CÁI NÀY, CÁI NÀY LÀ LÀM THÊM CHO ĐẸP
        {
            cout << b[i] << " ";
        }
        else if (i % Cot == Cot - 1)
        {
            cout << b[i] << endl;
        }
        // cout << b[i] << " ";             // GHI CÁI NÀY NÀY
    }
}

void PointerCuaPointer(int Hang, int Cot)
{
    int **MaTran = new int *[Hang];         // Tạo "Con trỏ của Con trỏ" để trỏ vào một Mảng (Đây là một bộ nhớ động)
    for (int i = 0; i < Cot; i++)
    {
        MaTran[i] = new int [Cot];          // Với mỗi 1 hàng sẽ tạo thêm Cot cột
    }

    for (int i =0; i < Hang; i++)           // Nhập dữ liệu vào
    {
        for (int j = 0; j < Cot; j++)
        {
            cout << "Hang [" << i + 1 << "] Cot [" << j + 1 << "]: ";
            cin >> MaTran[i][j];
        }
    }

    for (int i = 0; i < Hang; i++)          // In dữ liệu ra
    {
        for (int j = 0; j < Cot; j++)
        {
            cout << MaTran[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < Hang; i++)          // Giải phóng bộ nhớ động
    {
        delete []MaTran[i];      // Giải phóng từng hàng         
    }
    delete []MaTran; // Giải phóng cột 
}

int main()
{
    int R,C;
    cout << "Nhap so HANG cua ma tran: ";
    cin >> R;
    cout << "Nhap so COT cua ma tran: ";
    cin >> C;

    // Cách 1: 2 chiều -> 1 chiều           GHI CÁI NÀY
    //HaiChieuThanhMotChieu(R,C);
    
    // Cách 2: Pointer của Pointer
    //PointerCuaPointer(R,C);

    // CÁI DƯỚI NÀY CHỈ ĐỂ TRANG TRÍ 
    int Input;
    cout << endl << "Moi chon cach giai quyet: " << endl << "1. Mang 2 chieu -> 1 chieu" << endl << "2. Pointer cua Pointer" << endl << "Chon: ";
    cin >> Input;
    if (Input == 1)
    {
        HaiChieuThanhMotChieu(R,C);
    }
    else if (Input == 2)
    {
        PointerCuaPointer(R,C);
    }
    else
    {
        cout << "Chon sai cach." << endl;
        return 0;
    }
    return 0;
}