/*
Question-

Reverse a Doubly Linked List
Given a doubly linked list of n elements. The task is to reverse the doubly linked list.

Example 1:

Input:
LinkedList: 3 <--> 4 <--> 5
Output: 5 4 3

Example 2:
Input:
LinkedList: 75 <--> 122 <--> 59 <--> 196
Output: 196 59 122 75


problem link --> https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/


//CODE

//ITERATIVE

Node* reverseDLL(Node * head)
{
    //Your code here
    if(head->next==NULL || head==NULL){return head;}
    Node *forward; Node *curr = head; Node *prev = NULL;
    
    while(curr!=NULL){   
        forward = curr->next;
        curr->prev = curr->next;
        curr->next  = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    
    
}






