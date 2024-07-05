#include <iostream>
using namespace std;

struct Node             //Tạo Cấu trúc Node
{
    int Data;
    Node *pre;
    Node *next;
};

void InDanhSach(Node *&head)
{
    Node *to = head -> next;
    while (to != head)
    {
        cout << to -> Data << " ";
        to = to -> next;
    }
    cout << endl;
}

void TaoDanhSach(Node *&head)
{
    int array[8]={8,7,9,1,2,12,10,4}; 
    int Size = sizeof(array) / sizeof(array[0]);
    Node *current = head;
    for (int i = 0; i < Size; i++) 
    {    
        Node *newNode = new Node;
        newNode -> Data = array[i];
        newNode -> pre = nullptr;
        newNode -> next = nullptr;
        if (head == current)
        {
            head -> next = newNode;
            newNode -> pre = head;                    
            newNode -> next = head;
            head -> pre = newNode;
            current = newNode; 
        }
        else                                                        
        {
            newNode -> pre = current;
            current -> next = newNode;
            newNode -> next = head;
            head -> pre = newNode;
            current = newNode;
        }
    }    
    cout <<" Da tao thanh cong day tren." << endl; 
    InDanhSach(head);
}

void TimKiem(Node *&head)
{
    int Input, Index = 1;
    cout << "Xin moi nhap phan tu can tim kiem: " ;
    cin >> Input;
    Node *current = head -> next;
    while (current != head)
    {
        if (current -> Data == Input)
        {
            cout << "TIM THAY o vi tri " << Index << endl;
            return;
        }
        else
        {
            current = current -> next;
            Index++;
        }
    }
    cout << "Khong tim thay..." << endl;
}

void ThemNode(Node *&head, int Location, int newData)
{
    Node *newNode = new Node;
    newNode -> pre = nullptr;
    newNode -> next = nullptr;
    Node *current = head -> next;
    int count = 1;
    while (current != head) 
    {
        if (count == Location)
        {
            newNode -> Data = newData;
            newNode -> pre = current -> pre;
            (current -> pre) -> next = newNode;
            newNode -> next = current;
            current -> pre = newNode;
            return;
        }
        else 
        {
            current = current -> next;
            count++;
        }
    }
    delete current;
}

void XoaPhanTu(Node *&head, int Location)
{
    Node *current = head -> next;
    int count = 1;
    while (current != head)
    {
        if (count == Location)
        {
            (current -> pre) -> next = current -> next;
            (current -> next) -> pre = current -> pre;
            delete current;
            return;
        }
        else 
        {
            current = current -> next;
            count++;
        }
    }
}

void CleanUp(Node *&head)
{
    cout << "Dang xoa danh sach..." << endl;
    Node *last = head -> pre;
    while (head != last)
    {
        Node *temp = head;
        head = head -> next;
        delete temp;
        head -> pre = last;
        last -> next = head;
    }
    InDanhSach(head);
}

int main()
{
    cout << "Xin moi nhap lua chon sau: " << endl; 
    cout << "1. Tao day lien ket." << endl; 
    cout << "2. Tim phan tu trong day." << endl; 
    cout << "3. Them phan tu vao trong day." << endl; 
    cout << "4. Xoa phan tu trong day." << endl; 
    cout << "5. Xoa tat ca phan tu." << endl; 
    
    int option=6; 
    Node *head = new Node;
    head -> pre = head;
    head -> next = head;

    while (option > 5) 
    { 
        cout << "Xin moi nhap: "; 
        cin >> option; 
    } 
    switch (option) 
    { 
        case 1: // Task 1: Tạo dãy liên kết
        {
            TaoDanhSach(head);
            break; 
        }
        case 2: // Task 2: Tìm phân tử trong đây
        {   
            TimKiem(head);
            break;
        }
        case 3: // Task 3: Thêm phần tử vào trong dãy
        {
            int Location, newData;
            cout << "Xin moi nhap vi tri can them vao: " ; 
            cin >> Location;
            cout << "Xin moi nhap phan tu can them vao: " ; 
            cin >> newData;
            ThemNode(head, Location, newData);
            break;
        }
        case 4: // Task 4: Xoá phần từ trong dãy
        {
            int Location;
            cout << "Xin moi nhap vi tri can xoa: " ; 
            cin >> Location;
            XoaPhanTu(head, Location);
            break;
        }
        case 5: // Task 5: Xoá tất cả phần tử
        {
            CleanUp(head);
            break;
        }
        default: break;   
    } 
    return 0;
}