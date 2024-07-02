#include <iostream>
using namespace std;

template <class T>

class Number 
{
    private:
        T num;
    
    public: 
        Number (T n)            // Tương đương - Number(T n) : num(n) {}
        {
            num = n;
        }

        T GetNum()              // Tương đương - T GetNum() {return num;};
        {
            return num;
        }
};

int main()
{
    Number <int> so1(69);
    Number <char> chu('a');
    Number <double> so2(69.96);

    cout << "So nguyen: " << so1.GetNum() << endl;
    cout << "Chu cai: " << chu.GetNum() << endl;
    cout << "So nguyen: " << so2.GetNum() << endl;
}
