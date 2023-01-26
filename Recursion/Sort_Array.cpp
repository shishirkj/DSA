/*
Question-
Check if array is sorted

Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 

Example 1:

Input:
N = 5
arr[] = {10, 20, 30, 40, 50}
Output: 1
Explanation: The given array is sorted

//try using this 2nd example
Example 2:

Input:
N = 6
arr[] = {90, 80, 100, 70, 40, 30}
Output: 0
Explanation: The given array is not sorted.

problem link -->  https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/


//CODE
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        
        if(n==1){
            return 1;
        }
       
         else  if(arr[n-1]<arr[n-2])
        {
            return false;
        }
        arraySortedOrNot(arr,n-1);
        
        
    }
};