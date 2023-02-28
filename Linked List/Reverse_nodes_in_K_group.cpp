/*
Question-
Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).

Example 1:

Input:
LinkedList: 1->2->2->4->5->6->7->8
K = 4
Output: 4 2 2 1 8 7 6 5 
Explanation: 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4->2->2->1->8->7->6->5.
Example 2:

Input:
LinkedList: 1->2->3->4->5
K = 3
Output: 3 2 1 5 4 
Explanation: 
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.Hence, 
the resultant linked list is 3->2->1->5->4.

problem link --> https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/


//code
 struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
           //base condition
        if(head==NULL ||head->next==NULL||k==1){
        return head;}

        //step1: reverse first k nodes
           struct node *prev =NULL;struct node *next = head;struct node *curr = head;int count =0;
            while(count<k && curr!=NULL){ 
                next = next->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }

            //step2: recursion call
         
         if(next!=NULL){ 
             head->next = reverse( next,k);
         }
            //return head of reverse list
                    return prev;
    }



if Input
head =
[1,2,3,4,5]
k =
3
Output
[3,2,1,5,4]



//code

class Solution {
public:
    ListNode* _reverseKGroup(ListNode* head, int size, int k){
        if(head==nullptr || size<k) return head;
        ListNode* prev=nullptr, *cur=head, *next=nullptr;
        int count=0;
        while(cur!=nullptr && count<k){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            count++;
        }
        head->next=_reverseKGroup(next, size-k, k);
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int size=0;
        ListNode* temp=head, *root;
        while(temp!=nullptr){
            temp=temp->next;
            size++;
        }
        return _reverseKGroup(head, size, k);
    }

};
