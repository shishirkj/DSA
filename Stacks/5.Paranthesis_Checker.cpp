/*
Question-
Parenthesis Checker

Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".

Example 1:

Input:
{([])}
Output: 
true
Explanation: 
{ ( [ ] ) }. Same colored brackets can form 
balanced pairs, with 0 number of 
unbalanced bracket.
Example 2:

Input: 
()
Output: 
true
Explanation: 
(). Same bracket can form balanced pairs, 
and here only 1 type of bracket is 
present and in balanced way.
Example 3:

Input: 
([]
Output: 
false
Explanation: 
([]. Here square bracket is balanced but 
the small bracket is not balanced and 
Hence , the output will be unbalanced.


problem link --> https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/


//CODE  Using Mapping

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
bool ispar(string x)
{
    stack<char> s;
    map<char, char> brackets = {{')', '('}, {']', '['}, {'}', '{'}};
    for(int i = 0; i < x.length(); i++)
    {
        char ch = x[i];
        if(ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']')
        {
            if(s.empty())
            {
                return false;
            }
            char top = s.top();
            s.pop();
            //since we have done mapping
            if(brackets[ch] != top)
            {
                return false;
            }
        }
    }
    return s.empty();
}

    

};





//COE BETTER APPROACH


Time Complexity: O(|x|) ||    Auixilliary Space: O(|x|)
 
 bool ispar(string x)
{
 
    stack<char>s;
    for(int i=0;i<x.length();i++){ 
        char ch = x[i];
        if(ch=='('|| ch == '{'|| ch=='['){ 
            s.push(ch);
        }
        else if(ch ==')'||ch =='}'|| ch==']'){ 
            if(s.empty()){return false;}
            char top = s.top();
            
            if((ch== '}' && top=='{')||(ch== ')' && top=='(')|| (ch== ']' && top=='[')){ 
                s.pop();
            }
            else{ 
                return false;
            }
        }
        
    }
    return s.empty();
  
}



