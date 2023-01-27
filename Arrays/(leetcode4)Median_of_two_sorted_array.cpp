/*
question-

 Median of Two Sorted Arrays
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


problem link--> https://leetcode.com/problems/median-of-two-sorted-arrays/description/

*/


//CODE
Class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
           
                    vector<int>arr;float sum=0;int n;


                  for(int i=0;i<nums1.size();i++){
                      arr.push_back(nums1[i]);
                  }
                   for(int i=0;i<nums2.size();i++){
                      arr.push_back(nums2[i]);
                  }


               for(int i=0;i<arr.size();i++){
                    sum= sum+arr[i];
               }
               sort(arr.begin(),arr.end());
             
                   n=   arr.size() ;
             return n%2?arr[n/2]:(arr[n/2]+arr[n/2-1])/2.0;


    }
};