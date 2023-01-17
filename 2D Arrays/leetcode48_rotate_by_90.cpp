/*
Question -
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.
DO NOT allocate another 2D matrix and do the rotation.

 Example -

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]

Question link ->  https://leetcode.com/problems/rotate-image/description/
*/


//CODE

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose matix
            int n = matrix.size();
        for(int i= 0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
        }
             }
                // We can use reverse in-built function -> reverse(matrix.begin(),matrix.end())
             int left = 0; int right = n-1;
                    int top =0;int down = n-1;
             while(left<=right && top<=down){
                    for(int i=top;i<=down;i++){
                        swap(matrix[i][left],matrix[i][right]);
                    }
                    left++;right--;
             }

                   
         
    }
};