#include <fstream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ifstream inData;
    ofstream outData;

    // OutData
    outData.open("Data1.txt");
    outData << "xin chao C++" << endl;
    outData.close();

    // Indata
    inData.open("Data1.txt");
    string inputdata;
    getline(inData, inputdata);
    cout << inputdata << endl;
    inData.close();

    //Vector
    vector<string> vector_data;
    
    cout << vector_data.size() << endl;
    return 0;
}