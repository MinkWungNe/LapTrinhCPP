#include <iostream>
using namespace std;

struct IntStack
{
    int *stackArray;
    int count;
    int stackMax;
    int top;
};

IntStack *CreateStack(int max)
{
    IntStack *newStack = new IntStack;          // Trỏ newStack trỏ vào 1 cục stack mới
    newStack->top = -1;                         // Khởi tạo đỉnh ở -1 
    newStack->count = 0;                        // Khởi tạo count = 0
    newStack->stackMax = max;                   // Khởi tạo số lượng stack tối đa bằng số max
    newStack->stackArray = new int[max];        // Tạo mảng có kích thước max
    return newStack;                            // Trả những giá trị trên vào biến newStack để truy cập ở ngoài
}

int PushStack(IntStack *newStack, int dataIn)                   // -- THÊM STACK --
{
    if (newStack->count == newStack->stackMax) return 0;        // Kiểm tra nếu stack đầy thì không thêm stack nữa

    (newStack->count)++;                                        // Tăng biến đếm số lượng
    (newStack->top)++;                                          // Tăng vị trí đỉnh lên 
    newStack->stackArray[newStack->top] = dataIn;               // Gắn giá trị vào stack, stack xếp từ dưới lên
    return 1;
}

int PopStack(IntStack *newStack, int *dataOut)                  // -- XOÁ STACK --
{
    if (newStack->count == 0) return 0;                         // Kiểm tra nếu stack rỗng thì không xoá nữa

    *dataOut = newStack->stackArray[newStack->top];             // trỏ vào giá trị ở vị trí đầu
    (newStack->count)--;                                        // count giảm
    (newStack->top)--;                                          // đỉnh giảm
    return 1;
}

void BienDoiCoSo_10_2(int so)
{
    IntStack *stack = CreateStack(32); // Tạo stack (số nguyên có kích thước 32 bit = 4 byte)
    while (so > 0)
    {
        int PhanDu = so % 2;            // Phần dư sau khi chia 2
        PushStack(stack, PhanDu);
        so /= 2;                        // Phần còn lại sau khi chia sẽ được chia 2
    }

    cout << "So Nhi Phan: ";
    while (stack -> count > 0) // Trả giá trị và Xoá Stack 
    {
        int bit;                        // bit là biến để giá trị trả về
        PopStack(stack, &bit);          // Trả giá trị sau đó Xoá stack
        cout << bit;                    // In giá trị từ stack
    }
    cout << endl;
}

void BienDoiCoSo_10_8(int so)
{
    IntStack *stack = CreateStack(32); // Tạo stack (số nguyên có kích thước 32 bit)
    while (so > 0)
    {
        int PhanDu = so % 8;            // Phần dư sau khi chia 8
        PushStack(stack, PhanDu);
        so /= 8;                        // Phần còn lại sau khi chia sẽ được chia 8
    }

    cout << "So Bat Phan: ";
    while (stack -> count > 0) // Trả giá trị và Xoá Stack 
    {
        int bit;                        // bit là biến để giá trị trả về
        PopStack(stack, &bit);          // Trả giá trị sau đó Xoá stack
        cout << bit;                    // In giá trị từ stack
    }
    cout << endl;
}

void BienDoiCoSo_10_16(int so)
{
    char KyTu[] = "0123456789ABCDEF";
    IntStack *stack = CreateStack(8); // Tạo stack (char có kích thước 8 bit)
    while (so > 10)
    {
        int PhanDu = so % 16;            // Phần dư sau khi chia 16
        PushStack(stack, PhanDu);
        so /= 16;                        // Phần còn lại sau khi chia sẽ được chia 16
    }

    cout << "So Thap Luc Phan: ";
    while (stack -> count > 0) // Trả giá trị và Xoá Stack 
    {
        int bit;                        // bit là biến để giá trị trả về
        PopStack(stack, &bit);          // Trả giá trị sau đó Xoá stack
        cout << KyTu[bit];                    // In giá trị từ stack
    }
    cout << endl;
}

int main() 
{ 
    cout << "Xin moi nhap lua chon sau: " << endl; 
    cout << "1. Co so 10 sang co so 2." << endl; 
    cout << "2. Co so 10 sang co so 8." << endl; 
    cout << "3. Co so 10 sang co so 16." << endl;       
    int option=6; 
    while (option > 4) 
    { 
        cout << "Xin moi nhap: "; 
        cin >> option; 
    } 
    int so; 
    switch (option) 
    { 
        case 1: 
            cout << "Xin moi nhap so can doi: "; 
            cin >> so; 
            BienDoiCoSo_10_2(so); 
            break; 
        case 2:  
        { 
            cout << "Xin moi nhap so can doi: "; 
            cin >> so; 
            BienDoiCoSo_10_8(so); 
            break; 
        } 
        case 3:
        { 
            cout << "Xin moi nhap so can doi: "; 
            cin >> so; 
            BienDoiCoSo_10_16(so);
            break; 
        } 
        default: break; 
    } 
    return 0; 
}