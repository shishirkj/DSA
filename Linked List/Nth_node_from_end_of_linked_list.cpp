/*
Question-
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Example 1:

Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end is 8.  
Example 2:

Input:
N = 5
LinkedList: 10->5->100->5
Output: -1
Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.


problem link --> https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions
*/



//CODE


Node *reverse(Node *head){ 
    Node *curr = head;
    Node *prev  = NULL;
    Node *next = NULL;
    while(curr!=NULL){ 
        
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int getlength(Node *head){ 
    //we are taking count AS ZERO BEACUSE 
    //Consider the following example: if the linked list has only one node, and we set count to 
    //one at the beginning of the getlength() function, the function will return 2 instead of 1, because the while loop will run once and increase the count to 1, 
    //and then it will exit, and the count will be incremented again to 2. Therefore, to get the correct length of the linked list, we need to set the initial 
    //value of count to zero in the getlength() function.
    int count =0;
    Node *temp = head;
    while(temp!=NULL){ 
        temp= temp->next;
        count++;
    }
    return count;
}
    
    
    


int getNthFromLast(Node *head, int n)
{
       // Your code here
       if(head==NULL){ return NULL;}
      
        int length = getlength(head);
        if(length<n){return -1;}
       
       head = reverse(head);
       
       Node *temp= head;int count =1;
       while(count!=n  ){   
           temp = temp->next;
           count++;
       }
     
       
       return temp->data;
}