/*
Question-
You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that represents the value of the expression.

Note that:

The valid operators are '+', '-', '*', and '/'.
Each operand may be an integer or another expression.
The division between two integers always truncates toward zero.
There will not be any division by zero.
The input represents a valid arithmetic expression in a reverse polish notation.
The answer and all the intermediate calculations can be represented in a 32-bit integer.
 

Example 1:

Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9
Example 2:

Input: tokens = ["4","13","5","/","+"]
Output: 6
Explanation: (4 + (13 / 5)) = 6
Example 3:

Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
Output: 22
Explanation: ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
= ((10 * (6 / (12 * -11))) + 17) + 5
= ((10 * (6 / -132)) + 17) + 5
= ((10 * 0) + 17) + 5
= (0 + 17) + 5
= 17 + 5
= 22

question link --> https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
*/

//CODE
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(auto it:tokens)
        {
            if(it =="+"||it =="-"||it =="*"||it =="/")
            {
                int op2 = st.top();st.pop();
                int op1 = st.top();st.pop();
                if(it == "+"){ st.push(op1 + op2);}
                if(it == "-"){ st.push(op1 - op2);}
                if(it == "*"){ st.push(op1 * op2);}
                if(it == "/"){ st.push(op1 / op2);}
            }
            else
            {
                //converting string to int data type
                stringstream ss(it);
                int data;
                ss>>data;
                st.push(data);
            }
        }
        return st.top();
    }
};



//question link --> https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1


//CODE

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
           stack<int>st;

        for(int i=0; i<S.length();i++ )
        {
            if(S[i] =='+'||S[i] =='-'||S[i] =='*'||S[i] =='/')
            {
                int op2 = st.top();st.pop();
                int op1 = st.top();st.pop();
                if(S[i] == '+'){ st.push(op1 + op2);}
                if(S[i]  == '-'){ st.push(op1 - op2);}
                if(S[i]  == '*'){ st.push(op1 * op2);}
                if(S[i]  == '/'){ st.push(op1 / op2);}
            }
            else
            {
               st.push(S[i]-'0');
            }
        }
        return st.top();
    }
        
};