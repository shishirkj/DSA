/*
Question -
Print Like A Wave


example -
i/p -
1 2 5
3 4 6
 
o/p -
1 3 4 2 5 6

problem link --> https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=0

*/


//CODE

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int>ans;
    for(int col =0;col<mCols;col++){
        if(col&1==1){
            for(int row =nRows-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<nRows;row++){
                ans.push_back(arr[row][col]);
                              }
            }
        }
    return ans;
    }