/*
Question -
First element to occur k times
Given an array of N integers. Find the first element that occurs at least K number of times.
 
Example 1:
Input :
N = 7, K = 2
A[] = {1, 7, 4, 3, 4, 8, 7}
Output :
4
Explanation:
Both 7 and 4 occur 2 times. 
But 4 is first that occurs 2 times
As at index = 4, 4 has occurred 
atleast 2 times whereas at index = 6,
7 has occurred atleast 2 times.

problem link --> https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?page=1&curated[]=1&sortBy=submissions

*/

//CODE
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int>mp; unordered_map<int,int>mp1;int ans =INT_MAX;int res;
        for(int i=0;i<n;i++){ 
            mp[a[i]]++;
             if(mp[a[i]]>=k){ 
             return a[i];
        }
        
            }
        
        return -1;
    }
};