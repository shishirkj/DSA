/*
Question-
You are given the head of a Linked List. You have to move the last element to the front of the Linked List and return the list.

Example 1:

Input:
N = 5
List = {2,5,6,2,1}
Output:
{1,2,5,6,2}
Explanation:
In the given linked list, the last element is 1,
after moving the last element to the front the
linked list will be {1,2,5,6,2}.
 

Example 2:

Input:
N = 1
List = {2}
Output:
{2}
Explanation:
Here 2 is the only element so, the linked list
will remain the same.


problem link --> https://practice.geeksforgeeks.org/problems/move-last-element-to-front-of-a-linked-list/1?page=1&difficulty[]=0&difficulty[]=1&category[]=Linked%20List&curated[]=7&sortBy=submissions

*/


//CODE
class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head==NULL ||head->next==NULL){ return head;}
        ListNode *temp = head;ListNode *prev = NULL;
        while(temp->next!=NULL){
            prev = temp;
            temp = temp->next;
        }
        temp->next = head;
        prev->next = NULL;
        head = temp;
        return head;
        
    }
};