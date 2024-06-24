#include <iostream>
using namespace std;

struct Node             //Tạo Cấu trúc Node
{
    int Data;
    Node *link;
};

void addToFirst(Node *&first, int value)
{
    Node *newNode = new Node;
    newNode->Data = value;
    newNode->link = first;      // Trỏ link của Node mới vào first (first đang trỏ vào Node đầu) -> Node mới sẽ trỏ vào Node đầu
    first = newNode;            //  Đưa first đến Node mới (lúc này đã là Node đầu)
}

void addToLast(Node *&last, int value)
{
    Node *newNode = new Node;
    newNode -> Data = value;
    last -> link = newNode;    // Trỏ link của last vào Node mới  -> Node mới trở thành Node cuối
    last = newNode;            // Đưa last đến Node mới (lúc này last sẽ về vị trí cuối mới)
}

void displayMiddle(Node *first)
{
    Node *slow = first;
    Node *fast = first;

    while (fast != nullptr && fast -> link != nullptr)
    {
        slow = slow->link;
        fast = fast->link->link;
    }

    cout << "Gia tri o giua la: " << slow -> Data << endl;
}

void deleteKthNode(Node *&first, int k)
{
    if (first == nullptr)
        return;

    if (k == 1)
    {
        Node *temp = first;
        first = first->link;
        delete temp;
        return;
    }

    Node *prev = first;
    Node *current = first->link;
    int count = 2;

    while (current != nullptr)
    {
        if (count == k)             // Tìm được vị trí cần tìm thì gắn link của prev vào vị trí curent link vào và xoá curent
        {
            prev->link = current->link;
            delete current;
            return;
        }
        prev = current;
        current = current->link;
        count++;
    }
}

int main()
{
    // Task 1: Tạo danh sách node
    int GiaTriKhoiTao[] = {13, 11, 9, 7, 5, 3, 1};
    int Size = sizeof(GiaTriKhoiTao) / sizeof(GiaTriKhoiTao[0]);    // Size = 7

    Node *first = nullptr, *last = nullptr;                         // Khai báo 3 pointer ĐẦU, CUỐI với giá trị rỗng

    for (int i = 0; i < Size; i++)                                  // Lặp cho tới khi nhập 999 để thoát chương trình
    {
        Node *newNode = new Node;                                   // Pointer newNode sẽ tạo ra 1 cấu trúc Node mới
        newNode -> Data = GiaTriKhoiTao[i];                         // Gắn num vào phần tử [int Data] trong cấu trúc Node của thằng newNode
        newNode -> link = nullptr;                                  // Khởi tạo phần tử [*link] trong cấu trúc Node của thằng newNode
        if (first == nullptr)                                       // Node đầu tiên trong đoạn sẽ có first = NULL nên thực hiện code trong ngoặc
        {
            first = newNode;                                        // Đưa first với last vào Node mới
            last = newNode;
        }
        else                                                        // Các Node sau thì first nó đã fix ở Node đầu nên thực hiện code trong ngoặc
        {
            last -> link = newNode;                                 // Chỉ cái link của Node cũ tới Node mới
            last = newNode;                                         // Đưa last vào Node mới
        }
    }

    // Task 2: Add 1 node vào đầu danh sach (Data = 2)
    addToFirst(first, 2);

    // Task 3: Add 1 node vào cuối danh sách (Data = 8)
    addToLast(last, 8);

    // Task 4: Hiển trị giá trị node giữa
    displayMiddle(first);

    // Task 5: Xóa node thứ 4 (node 3)
    deleteKthNode(first, 4);

    
    Node *current = first;
    while (current != nullptr)
    {
        cout << current->Data << " ";
        current = current->link;
    }
 
    return 0;
}