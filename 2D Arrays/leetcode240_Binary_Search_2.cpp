/*
Question-
240. Search a 2D Matrix II

Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix.
This matrix has the following properties:
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

example -
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true

problem link --> https://leetcode.com/problems/search-a-2d-matrix-ii/description/

*/


//CODE


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
                int row = matrix.size();int col = matrix[0].size();
                int top = 0, down = row-1;
                int left = 0; int right = col-1;
                while(top<=down && left<=right){

                        if(matrix[top][right]==target){
                            return 1;
                        }
                        else if(matrix[top][right]>target){
                            right--;
                        }
                        else{
                            top++;
                        }
                }
                return 0;          

    }
};