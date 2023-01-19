/*
Question-
Give a N * N square matrix A, return all the elements of its anti-diagonals from top to bottom.

Example 1:

Input: 
N = 2
A = [[1, 2],
     [3, 4]]
Output:
1 2 3 4

Hence, elements will be returned in the 
order {1, 2, 3, 4}.

problem link--> https://practice.geeksforgeeks.org/problems/print-diagonally4331/1?page=1&difficulty[]=0&difficulty[]=1&category[]=Matrix&sortBy=submissions

*/

//CODE
class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		
		vector<int>ans;
                int row=0;int col =0;
                
                while(col<N){
                    int r = row;
                    int c = col;
                while(r<N && c>=0){
                    ans.push_back(A[r][c]);
                    r++;c--;
                    
                }
                
                col++;
                }
                col = N-1;
                row = 1;
                
                while(row<N){
                      int r = row;
                    int c = col;
                while(r<N && c>=0){
                    ans.push_back(A[r][c]);
                    r++;c--;
                    
                }
                
		                row++;
                }
                return ans;
	}

};