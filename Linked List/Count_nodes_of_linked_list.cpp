/*
Question-
Count nodes of linked listGiven a singly linked list.
The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

Example 1:
Input:
LinkedList: 1->2->3->4->5
Output: 5
Explanation: Count of nodes in the 
linked list is 5, which is its length.

Example 2:
Input:
LinkedList: 2->4->6->7->5->1->0
Output: 7
Explanation: Count of nodes in the
linked list is 7. Hence, the output
is 7.

problem link --> https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1?page=1&difficulty[]=-1&category[]=Linked%20List&sortBy=difficulty

*/


//CODE
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int count = 0;
        Node *temp = head;
        while(temp!=NULL){ 
              count++;
            temp = temp->next;
           
        }
        return count;
    
    }
};