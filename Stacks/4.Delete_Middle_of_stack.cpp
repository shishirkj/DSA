/*
Question-
Delete middle element of a stack


Given a stack with push(), pop(), empty() operations, delete the middle of the stack without using any additional data structure.
Middle: ceil((size_of_stack+1)/2) (1-based index)
 

Example 1:

Input: 
Stack = {1, 2, 3, 4, 5}
Output:
ModifiedStack = {1, 2, 4, 5}
Explanation:
As the number of elements is 5 , 
hence the middle element will be the 3rd
element which is deleted
Example 2:

Input: 
Stack = {1 2 3 4}
Output:
ModifiedStack = {1 3 4}
Explanation:
As the number of elements is 4 , 
hence the middle element will be the 2nd
element which is deleted


problem link --> https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


*/


//CODE
Time Complexity: O(N) ||  Auxiliary Space: O(N)

 void solve(stack<int>&s,int count, int sizeOfStack){
        
        //base call
        if(count==sizeOfStack/2){ 
            s.pop();
            return;
        }
        
        int nums = s.top();
        s.pop();
        
        //RECURSIVE CALL
        solve(s,count+1,sizeOfStack);
        
            s.push(nums);
        
        
    }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here
    
        int count =0;
        solve(s,count,sizeOfStack);
        
        
    }
    