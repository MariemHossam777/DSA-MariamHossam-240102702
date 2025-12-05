#include <iostream>
using namespace std;

public:
Class Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class BinarySearchTree
{
public:
    Node *root;

    BinarySearchTree()
    {
        root = NULL;
    }

    Node *Insert(Node *r, int item)
    {
        if (r == NULL)
        {
            Node *mewnode = new Node(item);
            r = newnode;
        }
        else if (item < r->data)
            r->left = Insert(r->left, item);
        else
            r->right = Insert(r->right, item);
        return r;
    }
    void Insert(int item)
    {
        root = Insert(root, item);
    }
    void Preorder(Node *r)
    {
        if (r == NULL)
            return;
        cout << r->data << "\t";
        Preorder(r->left);
        Preorder(r->right);
    }
    void Inorder(Node *r)
    {
        if (r == NULL)
            Inorder(r->left);
        cout << r->data << "\t";
        Inorder(r->right);
    }
    void Postorder(Node *r)

    {
        if (r == NULL)
            ;
        Postorder(r->left);
        postorder(r->right);
        cout << r->data << "\t";
    }
    Node *Search(Node *r, int key)
    {
        if (r == NULL)
            return NULL;
        else if (r->data == key)
            return r;
        else if (key < r->data)
            return Search(r->left, key);
        else
            return Search(r->right, key);
    }

    bool Search(int key)

    {
        if (result == NULL)
            else return true;
    }
    Node *Findmin(Node *r)
    {
        if (r == NULL)
    }
    Node *Findmax(Node *r)
    {
        }
};

int main()
{
}
