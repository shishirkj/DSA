/*
Question -
Transpose of Matrix

Write a program to find the transpose of a square matrix of size N*N.
Transpose of a matrix is obtained by changing rows to columns and columns to rows.

Input:
N = 4
mat[][] = {{1, 1, 1, 1},
           {2, 2, 2, 2}
           {3, 3, 3, 3}
           {4, 4, 4, 4}}
Output: 
{{1, 2, 3, 4},  
 {1, 2, 3, 4}  
 {1, 2, 3, 4}
 {1, 2, 3, 4}}

problem link --> https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1

*/


//CODE

class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
      

        // code here

        for(int i=0;i<n;i++){

            for(int j=i;j<n;j++)

           {

               swap(matrix[i][j],matrix[j][i]);

        }

            

        }

    


    }
};