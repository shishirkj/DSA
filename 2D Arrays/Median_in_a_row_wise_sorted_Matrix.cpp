/*
Question-

Given a row wise sorted matrix of size R*C where R and C are always odd, find the median of the matrix.


Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]
Output: 5
Explanation: Sorting matrix elements gives 
us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median.

problem link--> https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1?page=1&difficulty[]=0&difficulty[]=1&category[]=Matrix&sortBy=submissions

*/


//CODE

class Solution{   
    
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here 
         vector<int>ans;
            for(int i=0;i<R;i++){
                for(int j=0;j<C;j++){
                    ans.push_back(matrix[i][j]);
                }
            }
            sort(ans.begin(),ans.end());
            int mid = ans.size()/2;
            return ans[mid];
    
   
    }
};