Given a string you need to print all possible strings that can be made by placing spaces (zero or one) in between them. The output should be printed in sorted increasing order of strings

Example 1:

Input:
S = "ABC"
Output: (A B C)(A BC)(AB C)(ABC)
Explanation:
ABC
AB C
A BC
A B C
These are the possible combination of "ABC".
 

Example 2:

Input:
S = "AB"
Output: (A B)(AB)


Expected Time Complexity: O(2^n)
Expected Auxiliary Space: O(1)


//CODE


 private:
    void solve(string output,vector<string>&ans,int index,string S)
    {
        
        if(index>=S.length()-1)
        {
             char last_element = S[S.length()-1];
            output.push_back(last_element);
         ans.push_back(output);
            return;
        }
        
        //excluding
        char element = S[index];
        output.push_back(element);
        solve(output,ans,index+1,S);
        //backtrack
        output.pop_back();
        
        
        //including
        char including = S[index];
        char space = ' ';
        output.push_back(including);
        output.push_back(space);
        solve(output,ans,index+1,S);
        
    }
public:

    vector<string> permutation(string S){
        string output;
        vector<string>ans;
        int index =0;
        
        solve(output,ans,index,S);
        sort(ans.begin(),ans.end());
        return ans;
    }