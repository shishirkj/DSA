/*
Question-
Leaders in an array

Given an array A of positive integers. Your task is to find the leaders in the array. 
An element of array is leader if it is greater than or equal to all the elements to its right side. 
The rightmost element is always a leader.


Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.

problem llink --> https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&curated[]=1&sortBy=submissions
*/


//CODE
 public:
     vector<int> leaders(int a[], int n){

        // Code here

         vector<int> ans;

         int k=n-1;

         int max=INT_MIN;

         while(k>=0)

         {

             if(max<=a[k])

             {

                 max=a[k];

                 ans.push_back(a[k]);

             }

             k--;

         }

         reverse(ans.begin(),ans.end());

         return ans;
     }
};