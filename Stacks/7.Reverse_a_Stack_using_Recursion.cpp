/*
Question-

Reverse a Stack


You are given a stack St. You have to reverse the stack using recursion.

Example 1:

Input:
St = {3,2,1,7,6}
Output:
{6,7,1,2,3}
Example 2:

Input:
St = {4,3,9,6}
Output:
{6,9,3,4}


problem link --> https://practice.geeksforgeeks.org/problems/reverse-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/


//CODE

Time Complexity: O(N)  ||  Auxiliary Space: O(N)



class Solution{
    
void insertAtbottom(stack<int> &s,int x){ 
    //base case
    if(s.empty()){ 
        s.push(x);
        return;
    }
    
      int num = s.top();
      s.pop();
      
      //Recursive call
        insertAtbottom(s,x);
        
        s.push(num);
    
}    
    
public:
    void Reverse(stack<int> &St){
        //base case
        if(St.empty()){ return;}
        
            int num = St.top();
            St.pop();
            //Recursive call
            Reverse(St);
            
           insertAtbottom(St,num);
        
    }
};