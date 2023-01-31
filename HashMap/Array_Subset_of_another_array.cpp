/*
Question-
Array Subset of another array

Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m.
Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. 
 

Example 1:
Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

Example 2:
Input:
a1[] = {1, 2, 3, 4, 5, 6}
a2[] = {1, 2, 4}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

Example 3:
Input:
a1[] = {10, 5, 2, 23, 19}
a2[] = {19, 5, 3}
Output:
No
Explanation:
a2[] is not a subset of a1[]



problem link--> https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=array-subset

*/



//CODE
string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a1[i]]++;
    }
    for(int i=0;i<m;i++){
      if(mp[a2[i]]==0){   //if frequency is zero return no
          return "No"; 
      }
      else{
          
          mp[a2[i]]--; // decreaing the frequency if it is present 
      }
    
    }
    return "Yes";
    
    
        
    
}