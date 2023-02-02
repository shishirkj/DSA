/*
Question-

Subarrays with equal 1s and 0s

Given an array containing 0s and 1s. Find the number of subarrays having equal number of 0s and 1s.


Example 1:
Input:
n = 7
A[] = {1,0,0,1,0,1,1}
Output: 8
Explanation: The index range for the 8 
sub-arrays are: (0, 1), (2, 3), (0, 3), (3, 4), 
(4, 5) ,(2, 5), (0, 5), (1, 6)

Example 2:
Input:
n = 5
A[] = {1,1,1,1,0}
Output: 1
Explanation: The index range for the 
subarray is (3,4).

problem link --> https://practice.geeksforgeeks.org/problems/count-subarrays-with-equal-number-of-1s-and-0s-1587115620/0
*/



//CODE
class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        //https://www.youtube.com/watch?v=svMdY6wlQ6I
        long long ans =0;int sum =0;
        unordered_map<int,int>mp;mp[0] =1;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            sum = sum-1;
            else{
                sum = sum+1;
            }
        
        
            if(mp.find(sum)!=mp.end()){
                ans = ans+mp[sum];
                mp[sum]++;
            }
            else{
                mp[sum] = 1;
            }
     
        }
         return ans;
        
    }
};