Generate ParenthesesGiven n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]



problem link --> https://leetcode.com/problems/generate-parentheses/description/



//CODE

class Solution {

    private:
    void solve(int n,int open,int close,string output,vector<string>&ans)
    { 
        //base case
        if(open==0 && close==0)
        { 
            ans.push_back(output);
            return;
        }

        if(open!=0) 
        {  
            string op1 = output;
            op1.push_back('(');
            solve(n,open-1,close,op1,ans);
        }
        if(close>open)
        { 
            string op2 = output;
            op2.push_back(')');
           solve(n,open,close-1,op2,ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;string output;
        int open = n;int close =n;

        solve(n,open,close,output,ans);
        return ans;
    }
};