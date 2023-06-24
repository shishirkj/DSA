/*
Question-
 Search in Rotated Sorted Array
 There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.


Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1

problem link --> https://leetcode.com/problems/search-in-rotated-sorted-array/description/

*/
//CODE
Optimised solution-> complexity log(n):
int search(vector<int>& nums, int target) {
    int lo = 0, hi = int(nums.size()) - 1;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if ((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid]))
            lo = mid + 1;
        else
            hi = mid;
    }
    return lo == hi && nums[lo] == target ? lo : -1;
}





//CODE
class Solution {
public:
    
    int BinarySearch(vector<int>& nums, int target, int start, int end) {
        int l=start, r=end;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return -1;
    }
    
    int findMin(vector<int>& nums) 
    {
        int n = nums.size();
        int start = 0, end = n-1;
        if(nums[start] < nums[end])
        {
            return 0;
        }
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            int next = (mid+1)%n;
            int prev = (mid + n - 1)%n;
            if(nums[mid] <= nums[next] && nums[mid] <= nums[prev])
            {
                return mid;
            }
            if(nums[mid] <= nums[end])
            {
                end = mid - 1;
            }
            else if(nums[start] <= nums[mid])
            {
                start = mid + 1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int min_index = findMin(nums);
        int a1 = BinarySearch(nums , target, 0, min_index - 1);
        int a2 = BinarySearch(nums , target, min_index, n-1);
        if(a1 == -1)
            return a2;
        else
            return a1;
    }
};
