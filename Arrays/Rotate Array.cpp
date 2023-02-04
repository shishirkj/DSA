/*
Question-
Rotate Array
Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

Example 1:
Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.

Example 2:
Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20 
when rotated by 3 elements, it becomes 
8 10 12 14 16 18 20 2 4 6.

problem link --> https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1?page=3&sortBy=submissions
*/



//CODE
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        vector<int>arr1;
        int i =0;
           while(i<n){
               arr1.push_back(arr[(i+d)%n]);
               i++;
           }
          
        for(int i=0;i<n;i++){ 
            swap(arr[i],arr1[i]);
        }
        
    
    }
};