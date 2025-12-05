#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = NULL;
void insertNode(int value);

int main()
{
}
void insertNode(int value)
{

    node *new_node, *last;
    new_node = new node;
    new_node->data = value;
    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
    }
}