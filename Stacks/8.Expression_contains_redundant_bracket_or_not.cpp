/*
Question-
Expression contains redundant bracket or not
Given a string of balanced expression, find if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets. Print Yes if redundant, else No.
Note: Expression may contain + , - , *, and / operators. Given expression is valid and there are no white spaces present.

Example 1:

Input:
exp = ((a+b))
Output:
Yes
Explanation:
((a+b)) can reduced to (a+b).
Example 2:

Input:
exp = (a+b+(c+d))
Output:
No
Explanation:
(a+b+(c+d)) doesn't have any redundant or multiple
brackets.

problem link --> https://practice.geeksforgeeks.org/problems/e015cb4d3f354b035d9665e7c8a54a7aefb1901b/1

*/


//CODE
Time Complexity: O(N)
Auxiliary Space: O(N)


 int checkRedundancy(string s) {
        
            stack<char>st;
        //step1: push open bracket and operator in stack
        
        for(int i=0;i<s.length();i++){ 
            char ch = s[i];
            if(ch == '('|| ch=='-'||ch=='*'||ch=='/'||ch=='+'){ 
                st.push(ch);
            }
            
            //Since it is given in question that is a balanced/valid expression we don hv to check(!st.empty)
            
            //step2:check if between open bracket in stack adn close bracket in sting operator present or not
                    
           else if(ch==')'){ 
                bool isRedundant=true;
                while(st.top()!='('){ 
                    char top = st.top();
                    if(top=='+'||top=='*'||top=='-'||top=='/'){isRedundant=false;}
                    st.pop();
                }
                 st.pop();
                  if(isRedundant==true){return true;}
            }
           
        }
        
        return false;
    }