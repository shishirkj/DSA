/*
Question -

Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.

Example :
Input:
N = 3 
matrix[][] = {{45, 48, 54},
             {21, 89, 87}
             {70, 78, 15}}
Output: 45 48 54 87 89 21 70 78 15 
Explanation:
Matrix is as below:
45 48 54
21 89 87
70 78 15
Printing it in snake pattern will lead to 
the output as 45 48 54 87 89 21 70 78 15.



//Question link --> https://practice.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1?page=1&difficulty[]=-1&difficulty[]=0&category[]=Matrix&sortBy=submissions

*/


//CODE

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        int N = matrix.size();
        vector<int>ans;
        for(int row =0;row<N;row++){
            if(row&1==1){
                //if odd print reverse(left to right)
                for(int col =N-1;col>=0;col--){
                    ans.push_back(matrix[row][col]);
            }
            }
            else{
                // if even print normal(right to left)
                for(int col =0;col<N;col++){
                    ans.push_back(matrix[row][col]);
                }
            }
        }
         return ans;
    }
   
    
};