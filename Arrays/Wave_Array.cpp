/*
Question -
Wave Array

Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place).
In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

If there are multiple solutions, find the lexicographically smallest one.

Example 1:

Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.

problem link --> https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1?page=2&company[]=Flipkart&sortBy=submissions
*/



//CODE
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        int i=0;int j=1;
        
                        
                    while(i<=j && j<n){
                        swap(arr[i],arr[i+1]);
                        i+=2;j+=2;
                    }
                    
        
    }
};