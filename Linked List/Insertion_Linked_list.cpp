

Given a linked list sorted in ascending order and an integer called data, insert data in the linked list such that the list remains sorted.

Example 1:

Input:
LinkedList: 25->36->47->58->69->80
data: 19
Output: 19 25 36 47 58 69 80
Example 2:

Input:
LinkedList: 50->100
data: 75
Output: 50 75 100


class Solution{
  public:
    // Should return head of the modified linked list
Node* sortedInsert(Node* head, int data) {
    Node* newNode = new Node(data);
    
    if (head == NULL || head->data >= data) {
        newNode->next = head;
        head = newNode;
        return head;
    }
    
    Node* temp = head;
    while (temp->next != NULL && temp->next->data < data) {
        temp = temp->next;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    
    return head;
}