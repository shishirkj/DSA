/*
Question-
Given a boolean 2D array of n x m dimensions where each row is sorted.
Find the 0-based index of the first row that has the maximum number of 1's.

Example-
Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).

Note
If no such row exists, return -1.


problem link--> https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1?page=1&difficulty[]=0&difficulty[]=1&category[]=Matrix&sortBy=submissions

*/



//CODE


class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
                int row =-1;int col = m-1;
              for(int i=0;i<n;i++){
	    for(int j=col;j>=0;j--){
	        if(arr[i][j]==1){
	            row = i;
	            
	            //Not seeing the same column again
	            col--;
	        }
	       
	    
	    // if seen zero skip that row
	    else{
	        break;
	    }
              }
              }
              return row;
	    
	    
	    
	    
	}

};