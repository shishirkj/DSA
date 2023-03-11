/*
Question-
 Majority Element

 Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2


problem link --> https://leetcode.com/problems/majority-element/description/


*/

// BEST APPROACH


BOYERS MOOORE ALGORITHM


//ANOTHER APPROACH 

SORT THE ARAY AND IF COUNT MORE THAN N/2 RETURN THE ELEMET

//CODE

class Solution {
public:
    int majorityElement(vector<int>& nums) { 
            unordered_map<int,int>mp;
            for(int i=0;i<nums.size();i++){ 
                mp[nums[i]]++;
            }

            for(auto it:mp){ 
                if(it.second>(nums.size()/2)){ 
                    return it.first;
                }
            }
            return -1;





    }
};
