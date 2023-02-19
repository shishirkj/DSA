/*
Question-
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

Example 1:


Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]
Example 2:


Input: head = [1,1,1,2,3]
Output: [2,3]

problem link --> https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/
*/



//CODE   (USING HASHMAP)    T.C --> O(N)  S.C --> O(N)


 ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL || head->next==NULL){return head;}
         
        unordered_map<int,int>mp;
    

        ListNode *temp = head;
      // Initialize a hashmap to count the occurrences of each value
        while(temp!=NULL){ 
            mp[temp->val]++;
            temp = temp->next;
        }
             // Create a new dummy head and a pointer to the current node
            ListNode *dummy_head = new ListNode(0);
            ListNode *curr = dummy_head;

     // Iterate through the original list again and add the nodes with
    // non-duplicate values to the new list
            temp = head;
            while(temp!=NULL){ 
                if(mp[temp->val]==1){ 
                    curr->next = temp;
                    curr= curr->next;
                }
                temp = temp->next;
            }
 // Terminate the new list and return its second node (the first is
    // the dummy head)
    // we have to point to NULL or else it will give repeated node too     EXAMPLE --> [1,2,2,5] 
            curr->next = NULL;
            return dummy_head->next;
    }



//OPTIMIZED SOLN               T.C --> O(N)   S.C--> O(1);



   if(head==NULL || head->next==NULL){return head;}
       //creating a dummy node 
      ListNode *dummy_head = new ListNode(0);
      ListNode * curr = dummy_head;
      ListNode *current = head;
//checking if next node is same or not
      while(current!=NULL&&current->next!=NULL ){ 
            if(current->val==current->next->val){ 
                //moving it till its not same
                while(current->next!=NULL&& current->val==current->next->val ){ 
                    current = current->next;
                }
                curr->next = current->next;
                current = current->next;
               

            }
            else{ 
                    //3 things to do if not same
                    //1.join the nodes
                    //2.move current pointer on original list
                    //3.move the urr node on the duplicate list
                    curr->next = current;
                    current = current->next;
                    curr = curr->next;

            }
          


      }
               
        return dummy_head->next;


    