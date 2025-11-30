#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *last;
};

class Doubly_LinkedList
{
public:
    node *head;

    Doubly_LinkedList()
    {
        head = NULL;
    }

    void aadAthead(int val)
    {
        node *new_node = new node();
        new_node->data = val;

        if (head == NULL)
        {
            new_node->next = NULL;
            new_node->last = NULL;
            head = new_node;
        }
        else
        {
            new_node->next = head;
            new_node->last = NULL;
            head->last = new_node;
            head = new_node;
        }
    }

    void addAafterNode(int val, node *index)
    {
        node *new_node = new node();
        new_node->data = val;

        if (index == NULL)
        {
            cout << "this is not allowed";
        }

        new_node->last = index;
        new_node->next = index->next;
        index->next = new_node;
        if (new_node->next != NULL)
        {
            new_node->next->last = new_node;
        }
    }

    void addAfterNode(int val, node *index)
    {
        node *new_node = new node();
        new_node->data = val;

        if (index == NULL)
        {
            cout << "this is not allowed";
        }

        new_node->last = index->last;
        new_node->next = index;
        index->last = new_node;

        if (new_node->last != NULL)
        {
            new_node->last->next = new_node;
        }
    }

    void insertAtSpecificPosition(int val, int position)
    {
        node *new_node = new node();
        new_node->data = val;

        if (position == 1)
        {
            new_node->next = head;
            new_node->last = NULL;

            if (head != NULL)
            {
                head->last = new_node;
            }
            head = new_node;
            return;
        }

        node *current = head;
        int current_position = 1;
        while (current->next != NULL && current_position < position - 1)
        {
            current = current->next;
            current_position++;
        }
        new_node->next = current->next;
        new_node->last = current;

        if (current->next != NULL)
        {
            current->next->last = new_node;
        }

        current->next = new_node;
    }
}