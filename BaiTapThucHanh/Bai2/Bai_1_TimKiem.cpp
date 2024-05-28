#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ifstream Input;
    ofstream Output;
    
    //Read file
    Input.open("search.txt");
    string line;
    if (Input.is_open())
    {
        cout << "search.txt found...Reading file..." << endl;
        while ( getline(Input, line))
        {
            cout << line << endl;
        }
        Input.close();
    }
    else
    {
        cout << "File not found..." << endl;
    }
    cout << endl;

    //Find Word 
    Input.open("search.txt");
    string TuCanTim = "nho";
    vector <int> HangTimDuoc;
    int hang =1;
    if (Input.is_open())
    {
        cout << "search.txt found...Searching..." << endl;
        while ( getline(Input, line))
        {
            if (line.find(TuCanTim) != string :: npos)
            {
                HangTimDuoc.push_back(hang);
            }
            hang++;
        }
        Input.close();

        //Print Line
        if (HangTimDuoc.empty() == false)
        {
            cout <<"Da tim thay chu '"<< TuCanTim << "' tai hang: ";
            for (int i = 0; i < HangTimDuoc.size(); i++)
            {
                cout << HangTimDuoc[i] << ", ";
            }
        }
    }
    else
    {
        cout << "File not found..." << endl;
    }


    return 0;
}