Node* reverse(Node *head) {
    Node *Next = NULL , *prev = NULL;
    Node *current = head;
    while (current != NULL)
    {
        Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
    }
    return head = prev;
}
