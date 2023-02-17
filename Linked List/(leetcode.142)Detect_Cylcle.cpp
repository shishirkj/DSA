/*

// Floyds Cycle Detection ALGORITHM /HARE TORTOISE ALGO

https://www.geeksforgeeks.org/floyds-cycle-finding-algorithm/


Question-

141. Linked List Cycle
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

Example 1:
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Example 2:
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
Example 3:


Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.


problem link --> https://leetcode.com/problems/linked-list-cycle/description/

*/

//CODE


//BRUTE FORCE  T.C-->O(N)   S.C --> O(N)


class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,bool>visited;
   if(head==NULL || head->next==NULL)
   return 0;
   if(head->next==head)
   return 1;
   ListNode *temp = head;
    while(temp!=NULL){
        if(visited[temp]==true){ //checking if already marked true
            return true;
        }

        visited[temp]=true;     //marking all the nodes true
    temp = temp->next;          //traversing


    }
    return false;




  
        
    }
};




//OPTIMIZED CODE T.C--> o(N)    S.C--> O(1)


// USING FLOYDS CYCLE ALGORITHM
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL||head->next ==NULL){return 0;}
        if(head->next==head){return 1;}

        ListNode* fast = head; ListNode *slow = head;
            while(slow!=NULL && fast!=NULL){ 

                fast = fast->next;
                if(fast!=NULL)
                fast= fast->next;
                slow = slow->next;

                if(slow==fast){return true;}
            }
            return false;

        
    }
};