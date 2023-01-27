/*
Question -
Find duplicates in an array

Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

Note: The extra space is only for the array to be returned.
Try and perform all operations within the provided array. 

Example 1:
Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.

Example 2:
Input:
N = 5
a[] = {2,3,1,2,3}
Output: 2 3 
Explanation: 2 and 3 occur more than once
in the given array.

problem link --> https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&difficulty[]=0&difficulty[]=1&category[]=Arrays&category[]=Strings&category[]=Matrix&category[]=Binary%20Search&sortBy=submissions

*/



//CODE
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>ans;
        set<int>set;
       sort(arr,arr+n);
       int i=0;int j= 1;
            while(i<j && j<n){
                if(arr[i]==arr[j])
               set.insert(arr[i]);
            
            i++;j++;
    }
           for(auto x:set){
        ans.push_back(x);
    }
            if(ans.size()==0){
                ans.push_back(-1);
            }
   return ans;
    
    }
   
};
