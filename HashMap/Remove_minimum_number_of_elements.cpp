/*
Question-

Given two arrays A[] and B[] consisting of N and M elements respectively. The task is to find minimum number of elements to remove from each array such that no common element exist in both the arrays.


Example 1:
Input :
A[] = { 2, 3, 4, 5, 8 }
B[] = { 1, 2, 3, 4}
Output :
3
Explanation:
We need to remove 2, 3 and 4 from any 
array.
 

Example 2:
Input :
A[] = { 4, 2, 4, 4}
B[] = { 4, 3 }
Output :
1
Explanation:
We need to remove 4 from B[]



problem link --> https://practice.geeksforgeeks.org/problems/remove-minimum-number-of-elements4032/1?utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=remove-minimum-number-of-elements
*/


//CODE
class Solution{
  public:
    int minRemove(int a[], int b[], int n, int m) {
    /*    int ans;int count=0;
      for(int i=0;i<n;i++){
          ans = ans^a[i];
      }
      for(int j=0;j<m;j++){
          if(ans^b[j]==0)
          count++;
      }
      return count;
    }*/
    unordered_map<int,int>countA,countB;int ans =0;
    for(int i=0;i<n;i++){ 
        countA[a[i]]++;
    }
    for(int i=0;i<m;i++){ 
        countB[b[i]]++;
    }

    for(auto it:countA){ 
        //if element found is available
        if(countB.find(it.first)!= countB.end()){ 
            ans = ans+ min(it.second,countB[it.first]);
        }
        }
      return ans;  
    } 
        
    
};