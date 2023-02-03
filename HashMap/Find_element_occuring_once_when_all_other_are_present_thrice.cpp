/*
Question-
Find element occuring once when all other are present thrice

Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once.
Find that element which occurs once.


Example 1:
Input:
N = 4
arr[] = {1, 10, 1, 1}
Output:
10
Explanation:
10 occurs once in the array while the other
element 1 occurs thrice.

Example 2:
Input:
N = 10
arr[] = {3, 2, 1, 34, 34, 1, 2, 34, 2, 1}
Output:
3
Explanation:
All elements except 3 occurs thrice in the array.

problem link --> https://practice.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/

//CODE

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++){ 
            mp[arr[i]]++;
        }
       for(auto it:mp){ 
           if(it.second ==1)
           return it.first;
       }
        return 0;
    }
};