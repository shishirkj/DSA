/*
Question -
Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

problem link --> https://leetcode.com/problems/spiral-matrix/
*/


//CODE

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;

        int row = matrix.size();int col = matrix[0].size();
        int top = 0;
        int down = row-1;
        int left = 0;
        int right =col-1;
            int dir =0;
        while(down>=top && left<=right){
                if(dir == 0){
                    for(int i=left;i<=right;i++){
                        ans.push_back(matrix[top][i]);
                                                }
                    top++;
                            }
                else if(dir ==1){
                    for(int i=top;i<=down;i++){
                        ans.push_back(matrix[i][right]);
                                                }
                            right--;
                                }
                else if(dir==2){
                    for(int i=right;i>=left;i--){
                        ans.push_back(matrix[down][i]);
                    }
                    down--;
                }
                else if(dir ==3){
                    for(int i= down;i>=top;i--){
                        ans.push_back(matrix[i][left]);
                    }
                    left++;
                }
                dir = (dir+1)%4;
        }
        return ans;
    }
};