/*
Question-
876. Middle of the Linked List

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Example 2:
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.


problem link --> https://leetcode.com/problems/middle-of-the-linked-list/description/

*/



//CODE

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/


int length(Node *head) {   

Node *temp = head;
int count =0;
while (temp != NULL) {
    count++;
temp = temp->next;

                    }

return count;

}

  Node *findMiddle(Node *head) {
    // Write your code here
    
        int len = length(head);

        int ans = (len/2);
        Node *temp = head;int count =1;
        while (count<=ans) {
            temp = temp->next;
             count++;
            
                            }
        return temp;



}

//OPTIMIZED CODE
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

private:
   ListNode  *ans(ListNode *head){
 

    ListNode *fast = head->next;
    ListNode *slow = head;
    while (fast !=NULL) {
          fast = fast->next;
          if(fast!=NULL) 
              fast = fast->next;
              slow = slow->next;
           
   
    }

    return slow;
}
public:
    ListNode* middleNode(ListNode* head) {
        return ans(head);
    }
};