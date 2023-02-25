/*Question-

Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

Example 1:

Input:
N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0  
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).
Example 2:

Input:
N = 2
valueN[] = {6,3}
M = 1
valueM[] = {7}
Output: 7 0
Explanation: For the given two linked
list (6 3) and (7), after adding the
two linked list resultant linked list
will be (7 0).


problem link --> https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1?page=1&category[]=Linked%20List&curated[]=1&sortBy=submissions

*/


//CODE


/*Brute force
Write while loop for each edge cases seperately like

while(first!=NULL) OR while(second!=NULL) OR while(carry!=0)

*/


class Solution
{
    
    
private:

    Node *reverse(Node *temp){ 
        Node *prev = NULL;Node *curr = temp; Node *next = NULL;
        
            while(curr!=NULL){ 
             next = curr->next;   
            curr->next = prev;
            prev = curr;
            curr = next;
            }
        
        return prev;
    } 
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val){ 
        Node *temp = new Node(val);
        //empty list
            if(head==NULL){ 
                head = temp;
                tail = temp;
                return;
            }
            else{ 
                 tail->next=temp;
                tail = temp;
            }
    }
    
    
    
    Node *add(struct Node *first,struct Node *second){ 
        Node *ansHead=NULL;Node *ansTail=NULL;int carry=0;
        
        
         while(first!=NULL || second!=NULL|| carry!=0){ 
        int val1=0;
        if(first!=NULL){ 
            val1=first->data;
        }
         int val2=0;
        if(second!=NULL){ 
            val2=second->data;
        }
        
        
       int sum = carry+val1+val2;
       
       
       
       int digit = sum%10;
       
       
        carry = sum/10;
        //create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);
            if(first!=NULL){first = first->next;}
            if(second!=NULL){second = second->next; }
        }
        
        return ansHead;
        
        
    }


    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
         //step 1 -  reverse input LL
        first = reverse(first);
          //step2 - add 2 LL
        second  = reverse(second);
        
        Node *ans = add(first,second);
        
        //step 3 
        ans = reverse(ans);
        return ans;
        
    }
};