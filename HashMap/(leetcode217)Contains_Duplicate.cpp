/*
Question-
217. Contains Duplicate
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true

Example 2:
Input: nums = [1,2,3,4]
Output: false

Example 3:
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

problem link--> https://leetcode.com/problems/contains-duplicate/description/


*/

//CODE
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==2){
                return 1;
            }
        }
        return 0;
    }
};


bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        bool flag = false;
        for(int i=0;i<nums.size();i++){ 
            if(s.find(nums[i])!=s.end())
                flag = true;       
                                        
               s.insert(nums[i]); 
        }
        return flag;
    }
