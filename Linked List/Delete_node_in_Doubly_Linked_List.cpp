/*
Question-
Delete node in Doubly Linked List
Given a doubly linked list and a position. The task is to delete a node from given position in a doubly linked list.

Example 1:
Input:
LinkedList = 1 <--> 3 <--> 4 
x = 3
Output: 1 3  
Explanation: After deleting the node at
position 3 (position starts from 1),
the linked list will be now as 1->3.

Example 2:
Input:
LinkedList = 1 <--> 5 <--> 2 <--> 9  
x = 1
Output: 5 2 9

problem link --> https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1?page=1&difficulty[]=-1&category[]=Linked%20List&sortBy=difficulty

*/

//CODE

/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      if(x==1){ 
          Node *temp = head_ref;
          temp->next->prev = NULL;
          head_ref = temp->next;
          temp->next = NULL;
          delete temp;
      }
      else{   
          int count =1;Node *prev = NULL;Node *cur = head_ref;
          while(count<x){ 
              prev = cur;
              cur = cur->next;
              count++;
          
      }
     cur->prev = NULL;
     prev->next = cur->next;
     cur->next = NULL;
      delete cur;
    }
    return head_ref;
    }
    
};