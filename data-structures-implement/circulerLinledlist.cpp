Circulae_Linked_List()
{
    head = NULL;
}

void add_node(int val)
{
    node *new_node = new node();
    new_node->data = val;

    if (head == NULL)
    {
        head = new_node;
        head->next = head;
        head - last = head;
    }
    else
    {
        node *current_element = head->last;

        new_node->next = head;
        new_node->last = current_element;
        current_element->next = new_node;
    }
}