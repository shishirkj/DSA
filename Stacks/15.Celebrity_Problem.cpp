/*
Quetion-

The Celebrity Problem

A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note: Follow 0 based indexing.
Follow Up: Can you optimize it to O(N)
 

Example 1:

Input:
N = 3
M[][] = {{0 1 0},
         {0 0 0}, 
         {0 1 0}}
Output: 1
Explanation: 0th and 2nd person both
know 1. Therefore, 1 is the celebrity. 

Example 2:

Input:
N = 2
M[][] = {{0 1},
         {1 0}}
Output: -1
Explanation: The two people at the party both
know each other. None of them is a celebrity.

problem link --> https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/



//CODE
//Brute force

fix the borders with top ,down left,right

step1:

first while loop for row check if and zount no of zeroes

step2:
if the number of zeroes equal to n then it is possible ans

step3:

second while loop for row check if and zount no of ones

step4:
if the number of ones equal to n-1 then the element is ans


T.C --> O(N2)   S.C-->O(1);





//OPTIMIZED CODE 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
class Solution 
{
    
    
    
    private:
    
   bool knows(vector<vector<int> >& M, int A, int B, int n)
{
    if (M[A][B] == 1) {
        return true;
    } else {
        return false;
    }
}
                                                    
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
         //step1: push all element in stack
        for(int i=0;i<n;i++){ 
            s.push(i);
                            }
                            
        
          //step2: get 2 elements and copare them
            while(s.size()!=1){ 
            int A = s.top();
            s.pop();
                
            int B = s.top();
            s.pop();
                
            if(knows(M,A,B,n)){s.push(B);}
                
            else{  s.push(A);}
                
                          }
                int ans = s.top();          
                          
          //step3: VERIFICATION                
                                
            int ZeroCount =0;
            
            //for rows
            for(int i=0;i<n;i++){ 
                if(M[ans][i]==0){ZeroCount++;}
                                }
                                
                if(ZeroCount!=n)  {return -1;}
                
                
                int OneCount = 0;
                //for columns
                 for(int i=0;i<n;i++){ 
                if(M[i][ans]==1){OneCount++;}
                                }
                    //n-1 cauz excluding diagonal            
                if(OneCount!=n-1)  {return -1;}
                
                return ans;
                                
    }