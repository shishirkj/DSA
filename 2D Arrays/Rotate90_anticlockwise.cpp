/*
Question -
Rotate by 90 degree

Given a square matrix[][] of size N x N.
The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space.


Example 1:

Input:
N = 3
matrix[][] = [[1 2 3],
              [4 5 6],
              [7 8 9]]
Output:
3 6 9 
2 5 8 
1 4 7



problem link -> https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1?page=1&difficulty[]=1&category[]=Matrix&sortBy=submissions

*/


//CODE

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int n = matrix.size();
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
      int left = 0; int right = n-1;
                    int top =0;int down = n-1;
             while(left<=right && top<=down){
                    for(int i=left;i<=right;i++){
                        swap(matrix[top][i],matrix[down][i]);
                    }
                    top++;down--;
             }
    
    
}
