/*
Question-
Rotating an Array
Given an array of size N. The task is to rotate array by D elements where D ≤ N.

Example 1:

Input:
N = 7
Arr[] = {1, 2, 3, 4, 5, 6, 7}
D = 2
Output: 3 4 5 6 7 1 2
Explanation: 
Rotate by 1: [2, 3, 4, 5, 6, 7, 1]
Rotate by 2: [3, 4, 5, 6, 7, 1, 2]

problem link --> https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1?page=3&difficulty[]=-1&sortBy=submissions

*/


//CODE

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
        reverse(arr,arr+d);
        reverse (arr+d,arr+n);
        reverse (arr,arr+n);
    }
};