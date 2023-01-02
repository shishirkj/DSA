/*
QUESTION -

There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length)
such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target
if it is in nums, or -1 if it is not in nums.

Example :

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4


QUESTION LINK --> https://leetcode.com/problems/search-in-rotated-sorted-array/
*/

//CODE

class Solution {
public:


        int index(vector<int>& nums){
                int s=0;int n = nums.size();int e = n-1;
                while(s<=e){
                    if(nums[s]<=nums[e]){
                        return s;
                                        }
                        int mid = s+(e-s)/2;    // To avoid INTEGER OVERFLOW -->geeksforgeeks.org/how-to-avoid-integer-overflows-and-underflows-in-cpp/  
                        int next = (mid+1)%n;
                        int prev = (mid+n-1)%n;
                        if(nums[mid]<next && nums[mid]<prev){
                                return mid;

                                                             }
                        else if( nums[mid]>=nums[s]){

                                s = mid+1;                            
                                                    }
                        else if (nums[mid]<=nums[e]){
                            e = mid-1;

                                                     }
                             }
        }
    int search(vector<int>& nums, int target) {
             int start = 0; int end = index(nums);
                    while(s<=e){
                        int mid = s+(e-s)/2;
                        if(nums[mid]==target){
                            return 
                        }
    }
};