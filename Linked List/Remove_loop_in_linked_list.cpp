/*
Question-
Remove loop in Linked List

Given a linked list of N nodes such that it may contain a loop.

A loop here means that the last node of the link list is connected to the node at position X(1-based index). If the link list does not have any loop, X=0.

Remove the loop from the linked list, if it is present, i.e. unlink the last node which is forming the loop.


Example 1:

Input:
N = 3
value[] = {1,3,4}
X = 2
Output: 1
Explanation: The link list looks like
1 -> 3 -> 4
     ^    |
     |____|    
A loop is present. If you remove it 
successfully, the answer will be 1. 

Example 2:

Input:
N = 4
value[] = {1,8,3,4}
X = 0
Output: 1
Explanation: The Linked list does not 
contains any loop. 

Example 3:

Input:
N = 4
value[] = {1,2,3,4}
X = 1
Output: 1
Explanation: The link list looks like 
1 -> 2 -> 3 -> 4
     |_________|
A loop is present. 
If you remove it successfully, 
the answer will be 1. 

problem link --> https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?page=1&difficulty[]=1&category[]=Linked%20List&curated[]=1&sortBy=submissions

*/


//CODE

  Node *fast = head; Node *slow = head;
        // finding the intersection
        while(fast!=NULL && slow!=NULL && fast->next!=NULL){ 
            fast = fast->next;
            if(fast!=NULL){ 
                fast = fast->next;
            }
            slow = slow->next;
            if(slow ==fast){   
                Node *f = fast; Node *s = head;
                //finding  the first node
                while(f!=s){ 
                    s = s->next;
                    f = f->next;
                }
                //making the node before first pointing to NULL
                if(f==s){ 
                    Node *temp=f;
                    while(temp->next!=f){ temp = temp->next;}
                    
                    temp->next = NULL;
                }
            }
            
        
        
        
        
    }