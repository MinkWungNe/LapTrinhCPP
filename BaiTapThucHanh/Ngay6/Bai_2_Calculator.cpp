#include <iostream>
using namespace std;

template <class T>
class Calculator 
{
    private:
        T num1, num2;

    public:
        Calculator(T n1, T n2)
        {
            num1 = n1;
            num2 = n2;
        }

        T Cong() {return num1 + num2;};
        T Tru() {return num1 - num2;};
        T Nhan() {return num1 * num2;};
        T Chia() {return num1 / num2;};
};

int main()
{
    Calculator so1(10,10);
    cout << "10 + 10 = " << so1.Cong() << endl;
    cout << "10 - 10 = " << so1.Tru() << endl;
    cout << "10 x 10 = " << so1.Nhan() << endl;
    cout << "10 / 10 = " << so1.Chia() << endl;

    cout << endl;

    Calculator so2(5.5,3.3);
    cout << "5.5 + 3.3 = " << so2.Cong() << endl;
    cout << "5.5 - 3.3 = " << so2.Tru() << endl;
    cout << "5.5 x 3.3 = " << so2.Nhan() << endl;
    cout << "5.5 / 3.3 = " << so2.Chia() << endl;
}