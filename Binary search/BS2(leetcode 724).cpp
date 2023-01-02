/*
QUESTION -
Find Pivot Index
Given an array of integers nums, calculate the pivot index of this array.

What is pivot index ?
The pivot index is the index where the sum of all the numbers
strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left.
This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.


Example:
Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11


QUESTION LINK -->  https://leetcode.com/problems/find-pivot-index/

*/

//CODE

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int n= nums.size();int s=0,e = n-1;
    int mid = s+(e-s)/2;   // To avoid INTEGER OVERFLOW -->geeksforgeeks.org/how-to-avoid-integer-overflows-and-underflows-in-cpp/
    int sum =0;int sums=0;int temp;
    for(int i=s;i<mid;i++){
            sum = sum+nums[i];
    }
    for(int j=e;j>mid;j--){
        sums = sums+nums[j];
    }

    while(s<=e){
        if(sums>=sum){
                temp = mid +1;
        }
    
    }
    return temp;

    }
};