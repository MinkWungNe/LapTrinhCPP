#include <iostream>
using namespace std;

template <class T, class U, class V = char> // class V mặc định V là kiểu char
class ClassTemplate
{
    private:
        T var1;
        U var2;
        V var3;

    public:
        ClassTemplate(T v1, U v2, V v3): var1(v1), var2(v2), var3(v3) {} // gắn 3 biến v1,v2,v3 vào 3 biến private var1,var2,var3
        void print()
        {
            cout << "Bien 1: " << var1 << endl;
            cout << "Bien 2: " << var2 << endl;
            cout << "Bien 3: " << var3 << endl;
        } 
};

int main()
{
    ClassTemplate <int, double> bien1 (1,23.23, 'x');
    bien1.print();

    cout << endl;

    ClassTemplate <double, int, int> bien2(33.22, 10, 20);
    bien2.print();
}