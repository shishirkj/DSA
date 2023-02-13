/*
Question -
Check If Circular Linked List
Given head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered as circular.

Note: The linked list does not contains any inner loop.

Example 1:

Input:
LinkedList: 1->2->3->4->5
(the first and last node is connected,
i.e. 5 --> 1)
Output: 1
Example 2:

Input:
LinkedList: 2->4->6->7->5->1
Output: 0

problem link --> https://practice.geeksforgeeks.org/problems/circular-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/


//CODE


 Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/


bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL || head->next==NULL)
   return 0;
   if(head->next==head)
   return 1;
   Node *temp = head->next;
   
 while(temp!=NULL && temp!=head){
     temp = temp->next;
 }
     if(temp==NULL){return 0;}
     
 
 return 1;
 
 
}