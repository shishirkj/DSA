/*
Question-

Reverse a string using Stack

You are given a string S, the task is to reverse the string using stack.

Example 1:


Input: S="GeeksforGeeks"
Output: skeeGrofskeeG

problem link --> https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/



//CODE           Time Complexity: O(N) || Auxiliary Space: O(N)



char* reverse(char *S, int len)
{
    //code here
    
    //step1: Creating a stack to reverse char array as stack give reverse arrays
     stack<char>s; 
    for(int i=0;i<len;i++){ 
        s.push(S[i]);
    }
    
    //step2: pushing the top of stack to char array
   for(int i=0;i<len;i++){ 
       S[i] = s.top();
       s.pop();
   }
   
   //step3: return the reverse array(newly formed)
    return S;
}