Letter Case Permutation

Given a string s, you can transform every letter individually to be lowercase or uppercase to create another string.

Return a list of all possible strings we could create. Return the output in any order.

 

Example 1:

Input: s = "a1b2"
Output: ["a1b2","a1B2","A1b2","A1B2"]
Example 2:

Input: s = "3z4"
Output: ["3z4","3Z4"]


problem link --> https://leetcode.com/problems/letter-case-permutation/description/



class Solution {

private:
void solve(string s,vector<string>&ans,int index,string output)
{
    //base case
    if(index>=s.length())
    { 
        ans.push_back(output);
        return;
    }

    //handle digit
    if(s[index]>='0' && s[index]<='9')
    { 
        output.push_back(s[index]);
        solve(s, ans, index+1, output);
        //backtrack
         output.pop_back();
    }
    else{
        //excluding
        output.push_back(tolower(s[index]));
        solve(s,ans,index+1,output);
        //backtrack
        output.pop_back();

        //including
        output.push_back(toupper(s[index]));
        solve(s,ans,index+1,output);
        
    }
}
public:
vector<string> letterCasePermutation(string s) {
    vector<string>ans;
    int index =0;
    string output ="" ;

    solve(s,ans,index,output);
    return ans;
}