/*
Question-

Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -. 
Example 1:

Input: str = "a+b*(c^d-e)^(f+g*h)-i"
Output: abcd^e-fgh*+^*+i-
Explanation:
After converting the infix expression 
into postfix expression, the resultant 
expression will be abcd^e-fgh*+^*+i-
Example 2:

Input: str = "A*(B+C)/D"
Output: ABC+*D/
Explanation:
After converting the infix expression 
into postfix expression, the resultant 
expression will be ABC+*D/
 

 problem link --> https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1
*/



//CODE


/*Easy steps to solve this problem:

1. Scan the string from left to right.

2. If scanned charecter(sc) is a alphabet then add it to the answer.

3. If sc is a opening parenthesis '(' then push it to the stack

4. If sc is a closing parenthesis ')' then till we find this '(' in the stack we need to pop the element from the stack and add it to the answer.(Associativity)

5.  If sc is a operator then while the operators present in the stack has higher precedence we need to pop from the stack and add it to the answer. Then add the scanned operator to the stack.

6. Add remaining elements from the stack to the answer. */
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    
    int precedence(char ch)
    {
        if(ch=='^') return 3;
        else if(ch=='/' || ch=='*') return 2;
        else if(ch=='+' || ch=='-') return 1;
        else return -1;
    }
    
    bool isChar(char c)
    {
        if(c=='/' || c=='*'|| c=='+' || c=='-' || c==')' || c=='(' || c=='^') return false;
        else return true;
    }
    
    
    string infixToPostfix(string s) {
        // Your code here
        stack<char> sigma;
        
        string ans="";
        
        for(char ch: s)
        {
            if(isChar(ch))
            {
                ans+=ch;   
            }
            else if(ch=='('){
                sigma.push(ch);
            }
            else if(ch==')')
            {
                while(sigma.top()!='(')
                {
                    ans+=sigma.top();
                    sigma.pop();
                }
                sigma.pop();
            }
            else
            {
                while(!sigma.empty() && precedence(ch)<=precedence(sigma.top()))
                {
                    ans+=sigma.top();
                    sigma.pop();
                }
                sigma.push(ch);
            }
        }
        
        while(!sigma.empty())
        {
            ans+=sigma.top();
            sigma.pop();
        }
        
        return ans;
    }
};