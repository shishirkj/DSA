Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]



Expected Time Complexity: O(n! * n)

Expected Space Complexity: O(n)


class Solution {

    private:
    void solve(vector<int>&nums,vector<vector<int>>&ans,int index)
    {
        //base case
        if(index>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        //   loop/recursion
            for(int j=index;j<nums.size();j++)
            {
                swap(nums[index],nums[j]);

                solve(nums,ans,index+1);

                //backtrack
                swap(nums[index],nums[j]);
            }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index =0;
        solve(nums,ans,index);

        return ans;
    }

    