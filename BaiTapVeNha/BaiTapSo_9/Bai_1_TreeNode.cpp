#include <iostream>
using namespace std;

struct treeNode 
{
    int data; 
    struct treeNode* left; 
    struct treeNode* right; 
};

treeNode *createNode(int value)                     // Hàm tạo Node
{ 
    treeNode *newNode = new treeNode;       
    if (newNode != NULL)                    // Gắn giá trị vào Node mới
    { 
        newNode->data = value; 
        newNode->left = NULL; 
        newNode->right = NULL; 
    } 
    return newNode; 
}

treeNode *insertNode(treeNode* root, int value)     // Hàm Chèn Node
{ 
    if (root == NULL) 
    { 
        return createNode(value); 
    } 
    if (value < root->data) 
    { 
        root->left = insertNode(root->left, value); 
    } 
    else if (value > root->data) 
    { 
        root->right = insertNode(root->right, value); 
    } 
    return root; 
} 

treeNode *findMinNode(treeNode* node)               // Hàm để tìm Node nhỏ nhất
{
    while (node->left != NULL)
        node = node->left;
    return node;
}

treeNode* deleteNode(treeNode* root, int value)     // Hàm xoá 1 Node bất kỳ
{
    if (root == NULL)                                       // Nếu cây rỗng, trả về
    {
        return root;
    }                                      

    if (value < root->data)                                 // Nếu value < giá trị của root, tiếp tục tìm cây con bên TRÁI
    {
        root->left = deleteNode(root->left, value);        
    }                            
    else if (value > root->data)                            // Nếu value > giá trị của root, tiếp tục tìm cây con bên PHẢI
    {
        root->right = deleteNode(root->right, value);        
    }                           

    else                                                    // value = giá trị của root, xét trường hợp
    {
        if (root->left == NULL)                             // TH1: Không có Node con hoặc có 1 Node con
        {
            treeNode* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            treeNode* temp = root->left;
            delete root;
            return temp;
        }

        treeNode* temp = findMinNode(root->right);          // TH2: Có nhiều hơn 1 Node thì tìm Node con nhỏ nhất
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void preOrder(treeNode* root)              // Duyệt theo thứ tự TRƯỚC (pre-order) // case 4
{
    if (root != NULL) 
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(treeNode* root)               // Duyệt theo thứ tự GIỮA (in-order) // case 5
{
    if (root != NULL) 
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void postOrder(treeNode* root)             // Duyệt theo thứ tự SAU (post-order) // case 6
{
    if (root != NULL) 
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int Height(treeNode *root)                  // Tính độ cao của cây // case 7
{
    int left, right, totalHeight;
    if (root == NULL)
    {
        totalHeight = -1;
    }
    else 
    {   // Sử dụng pp duyệt theo thứ tự sau
        left = Height(root -> left);
        right = Height(root -> right);
        totalHeight = 1 + max(left, right);// hàm max có trong thư viện C++
    }
    return totalHeight;
}

int CountLeaf(treeNode *root)               // Đếm số cây // case 8
{
    if (root == NULL)
    {
        return 0;
    }
    int count = 0;
    count += CountLeaf(root -> left);
    count += CountLeaf(root -> right);
    if (root -> left == NULL && root -> right == NULL)
    {
        count++;
    }
    return count;
}

int TreeSize(treeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return (TreeSize(root -> left) + TreeSize(root -> right) + 1);
    }
}

void deleteTree(treeNode* root)            // Xoá cây // case 10
{
    if (root != NULL)
    {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

int main()
{
    int array[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    int Size = sizeof(array) / sizeof(array[0]);
    treeNode* root = NULL;
    int option = 0;

    while (option != 11)
    {
        cout << "1. Tao cay" << endl;
        cout << "2. Chen node moi vao cay" << endl;
        cout << "3. Xoa 1 data trong cay" << endl;
        cout << "4. Duyet cay thu tu truoc" << endl;
        cout << "5. Duyet cay thu tu giua" << endl;
        cout << "6. Duyet cay thu tu sau" << endl;
        cout << "7. Do cao cua cay" << endl;
        cout << "8. Dem so la" << endl;
        cout << "9. Tinh kich thuoc cay" << endl;
        cout << "10. Xoa cay" << endl;
        cout << "11. Exit" << endl;
        cout << "Moi chon: ";
        cin >> option;
        switch (option)
        {
            case 1:
            {
                // Tạo cây
                cout << endl;
                for (int i = 0; i < Size; ++i)
                {
                    root = insertNode(root, array[i]);
                }
                cout << "Created Binary Tree :D " << endl;
                break;
            }
            case 2:
            {
                // Chèn Node mới vào cây
                cout << endl;
                int value;
                cout << "Nhap gia tri can them: ";
                cin >> value;
                insertNode(root, value);
                cout << "Da them phan tu co gia tri [" << value << "].";
                cout << endl;
                break;
            }
            case 3:
            {   
                // Xoá 1 Data trong cây
                cout << endl;
                int value;
                cout << "Nhap gia tri can xoa: ";
                cin >> value;
                deleteNode(root, value);
                cout << "Da xoa phan tu co gia tri [" << value << "].";
                cout << endl;
                break;
            }
            case 4:
            {
                // Duyệt cây thứ tự trước
                cout << endl;
                cout << "Duyet cay theo thu tu TRUOC: ";
                preOrder(root);
                cout << endl;
                break;
            }
            case 5:
            {
                // Duyệt cây thứ tự giữa
                cout << endl;
                cout << "Duyet cay theo thu tu GIUA: ";
                inOrder(root);
                cout << endl;
                break;
            }
            case 6:
            {
                // Duyệt cây thứ tự sau
                cout << endl;
                cout << "Duyet cay theo thu tu SAU: ";
                postOrder(root);
                cout << endl;
                break;
            }
            case 7:
            {
                // Độ cao của cây
                cout << endl;
                int HeightCount = Height(root);
                cout << "Do cao cua cay: " << HeightCount << endl;
                break;
            }
            case 8:
            {
                // Đếm số lá 
                cout << endl;
                int LeafCounted = CountLeaf(root);
                cout << "So la cua cay: " << LeafCounted << endl;
                break;
            }
            case 9:
            {
                // Tính kích thước cây 
                cout << endl;
                int Size = TreeSize(root);
                cout << "Kich thuoc cua cay: " << Size << endl;
                break;
            }
            case 10:
            {
                // Xoá cây
                cout << endl;
                deleteTree(root);
                cout << "Da xoa cay!" << endl;
                break;
            }
            default: break;
        }
        cout << endl;
    }
    // Option = 11 thì ra ngoài đây và end chương trình
    cout << "Thoat khoi chuong trinh..." << endl;
    return 0;
}