void delete (int val)
{
    if (head == NULL)
    {
        cout << "empty";
        return;
    }
    node *current_element = head;

    while (current_element =->data != val)
    {
        current_element = current_element->next;

        if (current_element == head)
        {
            return;
        }
        if (current_element == head)
        {
            head = head->next;
        }
        current_element->last->next = current_element->next;
        current_element->next->last = current_element->last;
        delete current_element;
    }
}