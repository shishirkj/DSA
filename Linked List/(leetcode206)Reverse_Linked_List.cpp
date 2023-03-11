/*
Question-
206. Reverse Linked List

Given the head of a singly linked list, reverse the list, and return the reversed list.

Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:
Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []


problem link --> https://leetcode.com/problems/reverse-linked-list/description/
*/




//WE CAN REVERSE A LINKED LIST USING STACK ALSO
//CODE

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
            if(head ==NULL || head->next ==NULL){  
                return head;
            }

            ListNode *prev = NULL;
        ListNode *curr = head;
        while(curr!=NULL){   
            ListNode *forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;



    }
};



//RECURSIVE

problem link --> https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{
    
    private:
   struct  Node  *reverse(struct Node *head){  
        //base condition
     if(head->next==NULL || head==NULL){return head;}   
        
    Node *k  = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return k;
    }
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        return reverse(head);
    }
    
};
