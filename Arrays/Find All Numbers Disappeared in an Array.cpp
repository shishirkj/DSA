Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]


problem link --> https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/\




//CODE
T.C-->O(1)    S.C-->O(N)
 vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++)
        { 
            mp[nums[i]]++;
        }
             vector<int> result;
    for (int i = 1; i <= nums.size(); i++) {
        if (mp.find(i) == mp.end()) { // i is not in the map
            result.push_back(i);
        }
    }
    return result;
        
    }