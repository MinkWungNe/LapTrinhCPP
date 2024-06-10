#include <iostream>
using namespace std;

struct SoPhuc
{
    double THUC;
    double AO;
};
    void DisplaySP(SoPhuc KetQua);
    SoPhuc SetSP (double R, double I);
    SoPhuc operator + (SoPhuc A, SoPhuc B);
    SoPhuc operator - (SoPhuc A, SoPhuc B);
    SoPhuc operator * (SoPhuc A, SoPhuc B);
    SoPhuc operator / (SoPhuc A, SoPhuc B);

int main()
{
    SoPhuc A,B,C,D,E,F;
    A = SetSP(5.0, -7.0);
    B = SetSP(4.0, 2.0);
    C = A + B;
    D = A - B;
    E = A * B;
    F = A / B;

    cout << "Ket qua phep [+]: " << endl;
    DisplaySP(C);
    cout << endl;

    cout << "Ket qua phep [-]: " << endl;
    DisplaySP(D);
    cout << endl;

    cout << "Ket qua phep [*]: " << endl;
    DisplaySP(E);
    cout << endl;

    cout << "Ket qua phep [/]: " << endl;
    DisplaySP(F);
    cout << endl;

}

void DisplaySP (SoPhuc KetQua)
{
    cout << "So Thuc: " << KetQua.THUC << endl;
    cout << "So Phuc: " << KetQua.AO << endl;
}

SoPhuc SetSP (double R, double I)
{
    SoPhuc KetQua;
    KetQua.THUC = R;
    KetQua.AO = I;
    return KetQua;
}

SoPhuc operator + (SoPhuc A, SoPhuc B)
{
    SoPhuc KetQua;
    KetQua.THUC = A.THUC + B.THUC;
    KetQua.AO = A.AO + B.AO;
    return KetQua;
}

SoPhuc operator - (SoPhuc A, SoPhuc B)
{
    SoPhuc KetQua;
    KetQua.THUC = A.THUC - B.THUC;
    KetQua.AO = A.AO - B.AO;
    return KetQua;
}

SoPhuc operator * (SoPhuc A, SoPhuc B)
{
    SoPhuc KetQua;
    KetQua.THUC = A.THUC*B.THUC - A.AO*B.AO;
    KetQua.AO = A.THUC*B.AO + A.AO*B.THUC;
    return KetQua;
}

SoPhuc operator / (SoPhuc A, SoPhuc B)
{
    SoPhuc KetQua;
    double Mau = (B.THUC*B.THUC)+(B.AO*B.AO);
    KetQua.THUC = (A.THUC*B.THUC + A.AO*B.AO)/Mau;
    KetQua.AO = (A.AO*B.THUC - A.THUC*B.AO)/Mau;
    return KetQua;
}