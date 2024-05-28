#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char CauNoi[] = "Hoc, hoc nua, hoc mai. Co chi thi nen";
    char *ptc;
    int Length = strlen(CauNoi);
    
    for (int i = 0; i < Length;i++)
    {
        ptc = & CauNoi[i];
        if (CauNoi[i] == 'i' )
        {
            *ptc = 'I';
        }
    }
    
    cout << CauNoi << endl;

}