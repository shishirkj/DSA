/*
Question-

K-th element of two sorted Arrays

Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K.
The task is to find the element that would be at the k’th position of the final sorted array.
 
problem link --> https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?page=1&status[]=bookmarked&sortBy=submissions

*/


//CODE
 void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
             int i=0,j=0;
        while(i<n && j<m){

                if(arr1[i]>arr2[j])
                {
                    swap(arr1[i],arr2[j]);
                }
               
                i++;
                sort(arr2,arr2+m);
                  
              
        }