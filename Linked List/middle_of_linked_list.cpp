/*
Similar questionto leetcode-876 just returning the data


Question-
Finding middle element in a linked list


Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
1-> 2->3->4->5, then the middle node of the list is 3.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 3 
Explanation: 
Middle of linked list is 3.
Example 2: 

Input:
LinkedList: 2->4->6->7->5->1
Output: 7 
Explanation: 
Middle of linked list is 7.


problem link --> https://www.youtube.com/watch?v=Bne92MpRieE&list=PLvg-AaxR3aaYV8mYu0nxOtOITCMPrju_l

*/


//CODE


/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    
private:
int ans(Node *head){   
    
    Node *fast = head;
    Node *slow = head;
     while(fast!=NULL ){   
        fast= fast->next;
        if(fast!=NULL){
        fast = fast->next;
        slow = slow->next;
        }
     }
    
    return slow->data;
    
    
    
}
    
    
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        ans(head);
    }
};