/*
Question-
Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
Note: Try not to use extra space. Expected time complexity is O(N). The nodes are arranged in a sorted way.

Example 1:

Input:
LinkedList: 2->2->4->5
Output: 2 4 5
Explanation: In the given linked list 
2 ->2 -> 4-> 5, only 2 occurs more 
than 1 time.
Example 2:

Input:
LinkedList: 2->2->2->2->2
Output: 2
Explanation: In the given linked list 
2 ->2 ->2 ->2 ->2, 2 is the only element
and is repeated 5 times.



problem link --> https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

*/

//CODE     T.C-->O(N)   S.C-->  O(N)


 ListNode* deleteDuplicates(ListNode* head) {

            if(head==NULL || head->next==NULL){return head;}
        
       ListNode *curr = head;
        while(curr->next!=NULL){  
            
            //if duplicate element present
            if(curr->next->val==curr->val){ 
              ListNode *to_point = curr->next->next; 
              delete(curr->next);
              curr->next = to_point;
              
                
      
            }
            // if no duplicate present
            else{ 
                curr= curr->next;
            }
            
        }
        return head;


        
    }