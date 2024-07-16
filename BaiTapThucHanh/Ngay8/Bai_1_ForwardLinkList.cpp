#include <iostream>
using namespace std;

struct Node             //Tạo Cấu trúc Node
{
    int info;
    Node *link;
};

void DisplayList(Node *&first)
{
    Node *current = first;                  // Display List
    while (current != NULL)
    {
        cout << current -> info << " ";
        current = current -> link;
    }
    cout << endl;
    return;
}

Node *buildListForward()
{
    Node *first, *last, *newNode;
    int num;

    cout << "Enter a list of intergers ending with -999." << endl;
    cin >> num;
    first = NULL;

    while (num != -999)
    {
        newNode = new Node;

        newNode -> info = num;
        newNode -> link = NULL;

        if (first == NULL)
        {
            first = newNode;
            last = newNode;
        }
        else 
        {
            last -> link = newNode;
            last = newNode;
        }

        cin >> num;
    }
    return first;
}

void DisplayNumberOfNodes(Node *&first)
{
    int count;
    Node *current = first;
    while (current != NULL)
    {
        count++;
        current = current -> link;
    }
    cout << "The Number Of Nodes is: " << count << endl;
    return;
}

void addToFirst(Node *&first, int value)
{
    Node *newNode = new Node;
    newNode->info = value;
    newNode->link = first;      // Trỏ link của Node mới vào first (first đang trỏ vào Node đầu) -> Node mới sẽ trỏ vào Node đầu
    first = newNode;            //  Đưa first đến Node mới (lúc này đã là Node đầu)
}

void addToLast(Node *&first, int value)
{
    Node *newNode = new Node;
    newNode -> info = value;
    Node *current = first, *prev;
    while (current != NULL)
    {
        prev = current;
        current = current -> link;
    }
    prev -> link = newNode;    // Trỏ link của last vào Node mới  -> Node mới trở thành Node cuối
    return;
}

int main()
{
    // Task 1: Build list
    Node *first = buildListForward();
    DisplayList(first);

    // Task 2: display count the number of nodes
    DisplayNumberOfNodes(first);

    // Task 3: New Node at beginning of the list
    addToFirst(first, 0);
    DisplayList(first);

    // Task 4: New Node at the end of the list
    addToLast(first, 8);
    DisplayList(first);
    return 0;
}