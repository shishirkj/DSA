/*
Question-
Let's give it a try! You have a linked list and you have to implement the functionalities push and pop of stack using this given linked list. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. 

Example 1:

Input: 
push(2)
push(3)
pop()
push(4) 
pop()
Output: 3 4
Explanation: 
push(2)    the stack will be {2}
push(3)    the stack will be {2 3}
pop()      poped element will be 3,
           the stack will be {2}
push(4)    the stack will be {2 4}
pop()      poped element will be 4
Example 2:

Input: 
pop()
push(4)
push(5)
pop()
Output: -1 5

problem link --> https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1?page=1&category[]=Linked%20List&curated[]=1&sortBy=submissions
*/


//CODE      Time Complexity: O(1)  || Auxiliary Space: O(1)

void MyStack ::push(int x) 
{
    // Your Code
    
    
     /*step 1: first (or) new node pointeing to NULL as top is NULL and later creating
     a circular linked list where last node pointing to one previous node and bringing top one front */
     
   StackNode *newnode = new StackNode(x);
   newnode->next = top; 
   top = newnode;     
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
     if(top!=NULL){
    int ans=top->data;
    top=top->next;
    return ans;
     }
     else{return -1;}
        
        
    }