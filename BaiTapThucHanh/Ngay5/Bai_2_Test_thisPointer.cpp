#include "thisPointerClass.h"   // header này có include ios với using namespace std rồi nên khỏi ghi lại

int main()
{
    thisPointerClass object1(3,5,7);
    thisPointerClass object2;
    cout << "Object 1: " << endl; object1.print();
    cout << endl;
    object2 = object1.updateXYZ();
    cout << "Object 1 Updated: " << endl; object1.print();
    cout << endl;
    cout << "Object 2: " << endl; object2.print();
    cout << endl;
    return 0;
}