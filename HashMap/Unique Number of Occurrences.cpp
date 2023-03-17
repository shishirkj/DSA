/*
Question-
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
problem link --> https://leetcode.com/problems/unique-number-of-occurrences/description/
*/


//CODe
 bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp1,mp2;
        for(auto i:arr)
        {
            mp1[i]++;
        }

        for(auto i:mp1)
        {
            mp2[i.second]++;
        }
         for(auto it:mp2)
          if(it.second>1) return false;
        return true;
    }