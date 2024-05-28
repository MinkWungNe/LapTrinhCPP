#include <fstream>
#include <string>
#include <iostream>
using namespace std; 

int main()
{
    ifstream inData;
    ofstream outData;

    // Indata
    inData.open("Sinhvien.txt");
    if (inData.is_open())
    {
        cout << "Found Sinhvien.txt..." << endl;
    }
    else 
    {
        cout << "Sinhvien.txt not found." << endl;
        return 1;
    }
    string ho,lot,ten;
    inData >> ho >> lot >> ten;
    cout << "Student name: " << ho << " " << lot << " " << ten << " " << endl;
    double diem1,diem2,diem3,diem4,diem5,trungbinh;
    inData >> diem1 >> diem2 >> diem3 >> diem4 >> diem5;
    cout << "Test scores: " << diem1 << " " << diem2 << " " << diem3 << " " << diem4 << " " << diem5 << " " << endl;
    trungbinh = (diem1+diem2+diem3+diem4+diem5)/5;
    cout << "Average test score: " << trungbinh << endl;
    inData.close();

    return 0;
}