#include <iostream>
using namespace std;

struct Node             //Tạo Cấu trúc Node
{
    int Data;
    Node *pre;
    Node *next;
};

int main()
{
    cout << "Xin moi nhap lua chon sau: " << endl; 
    cout << "1. Tao day lien ket." << endl; 
    cout << "2. Tim phan tu trong day." << endl; 
    cout << "3. Them phan tu vao trong day." << endl; 
    cout << "4. Xoa phan tu trong day." << endl; 
    cout << "5. Xoa tat ca phan tu." << endl; 
    
    int option=6; 
    while (option > 5) 
    { 
        cout << "Xin moi nhap: "; 
        cin >> option; 
    } 
    switch (option) 
    { 
        case 1: 
        {
            int array[8]={8,7,9,1,2,12,10,4}; 
            int Size = sizeof(array) / sizeof(array[0]);
            Node *head = new Node;
            head -> pre = head;
            head -> next = head;
            Node *current = nullptr;
            for (int i = 0; i < Size; i++) 
            {    
                Node *newNode = new Node;
                newNode -> Data = array[i];
                newNode -> pre = nullptr;
                newNode -> next = nullptr;
                if (head == head)
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
            Node *to = new Node;
            to = head -> next;
            while (to != head)
            {
                cout << to -> Data << " ";
                to = to -> next;
            }
            cout << endl;
            break; 
        }
        case 2:
        {
            cout << "Xin moi nhap phan tu can tim kiem: " ; 
            //findNode... 
            break;
        }
        case 3:
        {
            cout << "Xin moi nhap vi tri can them vao: " ; 
            //... 
            cout << "Xin moi nhap phan tu can them vao: " ; 
            //........... 
            break;
        }
        case 4:
        {
            cout << "Xin moi nhap vi tri can xoa: " ; 
            //... 
            //........... 
            break;
        }
        case 5:
        {
            break;
        }

        default:
        {
            break; 
        } 
            
    } 
    return 0;
}