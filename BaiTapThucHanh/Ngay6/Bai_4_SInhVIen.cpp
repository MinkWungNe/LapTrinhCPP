#include <iostream>
using namespace std;

template <class T = double> // class mặc định double
class infoSV
{
    private:
        string name;
        T GPA;

    public:
        infoSV(string n, T grade): name(n), GPA(grade) {}
        void getInfo() const;
};
// Định nghĩa hàm getInfo() ngoài class
template <class T>          // Trên định nghĩa mặc định rồi thì dưới khỏi
void infoSV <T> :: getInfo() const
{
    cout << "Ten sinh vien: " << name << endl;
    cout << "GPA: " << GPA << endl;
}

int main()
{
    infoSV student1("Huynh Van Chi", 2.2);
    student1.getInfo();
}