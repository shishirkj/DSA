/*
Question-
142. Linked List Cycle II

Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

Do not modify the linked list.

 

Example 1:


Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.
Example 2:


Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.
Example 3:


Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.




problem link --> https://leetcode.com/problems/linked-list-cycle-ii/description/

problem link --> https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1
*/


//code
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
          if(head == NULL||head->next ==NULL){return 0;}

       ListNode* fast = head; ListNode *slow = head;
            while(slow!=NULL && fast!=NULL){ 

                fast = fast->next;
                if(fast!=NULL)
                fast= fast->next;
                slow = slow->next;

                if(slow==fast){
                    ListNode *s = head ; ListNode *f = fast;
                    while(f!=s){ 
                        s = s->next;
                        f = f->next;
                    }
                    return f;
                }
            }
            return 0;
        
    }
};