/*
Question-
You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 
Note: No head reference is given to you. It is guaranteed that the node to be deleted is not a tail node in the linked list.

Example 1:

Input:
N = 2
value[] = {1,2}
node = 1
Output: 2
Explanation: After deleting 1 from the
linked list, we have remaining nodes
as 2.
Example 2:

Input:
N = 4
value[] = {10,20,4,30}
node = 20
Output: 10 4 30
Explanation: After deleting 20 from
the linked list, we have remaining
nodes as 10, 4 and 30.


problem link--> https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1?page=1&category[]=Linked%20List&curated[]=1&sortBy=submissions

*/


//CODE


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       
       //step1: copying the data of dels next node to del
       del->data = del->next->data;
       
       //step2: After copying data deleting the node after node del 
       
       Node *first = del->next;
       del->next = del->next->next;
       delete(first);
       
       
    }

};