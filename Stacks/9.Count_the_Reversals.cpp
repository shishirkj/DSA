/*
Question-

Count the Reversals

Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression.
A reversal means changing '{' to '}' or vice-versa.

Example 1:

Input:
S = "}{{}}{{{"
Output: 3
Explanation: One way to balance is:
"{{{}}{}}". There is no balanced sequence
that can be formed in lesser reversals.
â€‹Example 2:

Input: 
S = "{{}{{{}{{}}{{"
Output: -1
Explanation: There's no way we can balance
this sequence of braces.

problem link --> https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/


//CODE

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).


int countRev (string s)
{
    //step 1: if string length is odd return -1;
    if(s.length()&1){return -1;}
    
    stack<char>st;
    
    //step 2: take all the valid braces remove it and keep it aside  and open brace should be before close brace
    for(int i=0;i<s.length();i++){ 
        char ch  = s[i];
                if(ch == '{'){ 
                    st.push(ch);
                    
                }
                else if(ch =='}'){
                    if(!st.empty() && st.top()=='{')
                    {
                        st.pop();
                    }
                    
                else{ 
     //after removing invlaid braces pushing all invalid braces(three possibilities)
                    st.push(ch);
                }
                }
                                }
                                
                                
    //step 3: return ans and fix the invalid braces by reversing half of it  
    
                int a =0;int b =0;
                while(!st.empty()){
                    
                    if(st.top()=='{'){ 
                        b++;
                    }
                    else{
                        a++;
                    }
                    st.pop();
                }
                
                  int ans = (a+1)/2+(b+1)/2;
                  
                return ans;   
}