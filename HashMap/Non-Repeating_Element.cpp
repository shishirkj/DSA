/*
Question-
Non-Repeating Element

Find the first non-repeating element in a given array arr of N integers.
Note: Array consists of only positive and negative integers and not zero.

Example 1:
Input : arr[] = {-1, 2, -1, 3, 2}
Output : 3
Explanation:
-1 and 2 are repeating whereas 3 is 
the only number occuring once.
Hence, the output is 3. 
 

Example 2:
Input : arr[] = {1, 1, 1}
Output : 0

problem link --> https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1

*/


//CODE

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){ 
           mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){ 
            if(mp[arr[i]]==1){
            return arr[i];
            
               }
        }
        return 0;
        
    } 
  
};