/*
QUESTION -
Find Peak Element


What is a peak element?

A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index.
If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞.
In other words, an element is always considered to be strictly greater
than a neighbor that is outside the array.


Example :
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.


QUESTION LINK --> https://leetcode.com/problems/find-peak-element/

*/



//CODE


class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int ans=0;
        if(arr.size()==1)
            return 0;
        while(start<=end) {
            int mid=start+(end-start)/2;  //to avoid INTEGER OVERFLOW -->geeksforgeeks.org/how-to-avoid-integer-overflows-and-underflows-in-cpp/
            //int prev=(mid+arr.length-1)%arr.length;
            //int next=(mid+1)%arr.length;
            if(mid>0 && mid<arr.size()-1) {
                if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) {
                    return mid;
                }
                else if(arr[mid+1]>arr[mid])
                    start=mid+1;
                else
                    end=mid-1;
            }
            else {
                if(mid==0) {
                    if(arr[mid]>arr[mid+1])
                        return mid;
                    else
                        return mid+1;
                    
                }
                else if(mid==arr.size()-1) {
                    if(arr[mid]>arr[mid-1])
                        return mid;
                    else
                        return mid-1;
                    
                    
                }
            }
        }
        return ans;
    }

    };





