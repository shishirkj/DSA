/*
Question-
34. Find First and Last Position of Element in Sorted Array
Given an array of integers nums sorted in non-decreasing order,
find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.



Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]


question link--> https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/


*/



//CODE
class Solution {
public:
int firstocc(vector<int>& nums, int target ){
            int s=0;int n= nums.size();
            int e =n-1;int temp =-1;
            while(s<=e){
                int mid = s+(e-s)/2;
                    if(nums[mid]==target){
                            temp = mid;
                            e = mid-1;
                    }
                    else if(nums[mid]<target){

                        s = mid+1;
                    }
                    else{
                        e = mid-1;
                    }
            }
            return temp;


}
int lastocc(vector<int>& nums, int target ){
            int s=0;int n= nums.size();
            int e =n-1;int temp =-1;
            while(s<=e){
                int mid = s+(e-s)/2;
                    if(nums[mid]==target){
                            temp = mid;
                            s= mid+1;
                    }
                    else if(nums[mid]<target){

                        s = mid+1;
                    }
                    else{
                        e = mid-1;
                    }
            }
            return temp;


}
vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(firstocc(nums,target ));
        ans.push_back(lastocc(nums,target ));
        
        return ans;
    }


};