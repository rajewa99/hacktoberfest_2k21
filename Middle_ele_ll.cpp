Question
Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
1-> 2->3->4->5, then the middle node of the list is 3.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4
  Input:
LinkedList: 1->2->3->4->5
Output: 3 
Explanation: 
Middle of linked list is 3.
  
  
  solution
  int getMiddle(Node *head)
{
    Node* slow = head;
    Node* fast = head;
    
    while( fast and fast -> next )
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    
    return slow -> data;
}
