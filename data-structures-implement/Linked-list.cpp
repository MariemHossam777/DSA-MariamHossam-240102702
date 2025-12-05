#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
class LinkedList
{
private:
    node *head;
    int count;

public:
    LinkedList()
    {
        head = NULL;
        count = 0;
    }

    int size()
    {
        return count;
    }

    void printList()
    {
        node *p = head;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }

    int findNode(int val)
    {
        node *p = head;
        int position = 0;
        while (p != NULL)
        {
            if (p->data == val)
            {
                return position;
            }

            p = p->next;
            position++;
        }
        return -1;
    }

    void insertInBeginningAndEmpty(int val)
    {
        node *pnewNode = new node;
        pnewNode->data = val;
        pnewNode->next = head;
        head = pnewNode;
        count++;
    }

    void insertAttheEnd(int val)
    {

        node *pnewNode = new node;
        pnewNode->data = val;
        pnewNode->next = NULL;

        if (size() == 0)
        {
            head = pnewNode;
        }
        else
        {

            node *p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }

            p->next = pnewNode;
        }

        count++;
    }
};

int main()
{

    LinkedList ll;
    ll.insertInBeginningAndEmpty(5);
    ll.insertInBeginningAndEmpty(7);
    ll.insertInBeginningAndEmpty(8);

    cout << ll.findNode(8) << endl;
    cout << ll.findNode(100) << endl;

    cout << ll.size() << endl;
    ll.printList();
}
