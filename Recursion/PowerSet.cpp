/*
Subsets

Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]

problem link --> https://leetcode.com/problems/subsets/description/
*/


//CODE

//Expected Time Complexity : O(2^n)))
//Expected Auxiliary Space : O(2^n*length of each subset)

class Solution {

    private:
    void solve(vector<int>&nums,int index,vector<vector<int>>&ans,vector<int>output)
    {
        //base condition (agar index array se bahar ho gaya)
        if(index>=nums.size()){
            ans.push_back(output);
        return;
        }
        
        //exclude (index ko aage move kardo)
        solve(nums,index+1,ans,output);

        //include (index ko output mein daal do and aage move kardo)
        int element = nums[index];
        output.push_back(element);
        solve(nums,index+1,ans,output);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;vector<vector<int>>ans;
        int index =0;
        solve(nums,index,ans,output);
        return ans;
   