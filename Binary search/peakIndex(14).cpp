/*
What is bitonic ?
An array is said to be bitonic if the elements in the array are first strictly increasing
and then strictly decreasing.(Like a mountain)

Example -->  1,2,3,4,5,6,7,6,5,4,3,2,1

QUESTION - 
 Peak Index in a Mountain Array

 Example 1:

Input: arr = [0,1,0]
Output: 1


Example 2:

Input: arr = [0,2,1,0]
Output: 1

QUESTION LINK --> https://leetcode.com/problems/peak-index-in-a-mountain-array/
SIMILAR QUESTION --> https://www.geeksforgeeks.org/find-element-bitonic-array/
*/


//CODE

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s =0;
       int  n= arr.size();int e =n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(mid>0 && mid<n-1){
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
               return mid;
            }
            else if (arr[mid-1]>arr[mid]){
                   e = mid-1;
            }
            else {
                s = mid+1;
            }
            }
            if(mid==0){
            if(arr[0]>arr[1]){
                return 0;}
                else{
                    return 1;
                }
            }
            if(mid == n-1){
                if(arr[mid]>arr[n-2]){
                            return n-1; }
                            else{
                                return n-2;
                            }
            }
            
            
        }
        return -1;
       
    }
};
