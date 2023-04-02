
Given an array arr[] of integers of size N that might contain duplicates, the task is to find all possible unique subsets.

Note: Each subset should be sorted.

Example 1:

Input: N = 3, arr[] = {2,1,2}
Output:(),(1),(1 2),(1 2 2),(2),(2 2)
Explanation: 
All possible subsets = (),(2),(1),(1,2),(2),(2,2),(2,1),(2,1,2)
After Sorting each subset = (),(2),(1),(1,2),(2),(2,2),(1,2),(1,2,2) 
Unique Susbsets in Lexicographical order = (),(1),(1,2),(1,2,2),(2),(2,2)
Example 2:

Input: N = 4, arr[] = {1,2,3,3}
Output: (),(1),(1 2),(1 2 3)
(1 2 3 3),(1 3),(1 3 3),(2),(2 3)
(2 3 3),(3),(3 3)

Expected Time Complexity: O(2N).
Expected Auxiliary Space: O(2N * X), X = Length of each subset.


problem link --> https://practice.geeksforgeeks.org/problems/subsets-1587115621/1


//code

class Solution
{
  void solve(vector<int> arr, int n, int index, set<vector<int>>& ans, vector<int>output) {
    
    // Base condition
    if (index >= n) {
         
            ans.insert(output);
        
        return;
    }

    // Exclude the current element
    solve(arr, n, index + 1, ans, output);

    // Include the current element
    int element = arr[index];
    output.push_back(element);
    solve(arr, n, index + 1, ans, output);
   
}
  
    public:
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(),arr.end());

       int index = 0;  set<vector<int>>ans;   vector<int>output;
     
       solve(arr,n,index,ans,output);
       
       vector<vector<int>> result(ans.begin(), ans.end());
       sort(result.begin(),result.end());
       return result;
    }