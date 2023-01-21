/*
Question -
Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not.
Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.


problem link --> https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-1&sortBy=submissions
*/


//CODE
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        
        sort(A.begin(),A.end());sort(B.begin(),B.end());
        for(int i=0;i<A.size();i++){
            if(A[i]!=B[i]){
                return 0;
            }
        }
        return 1;
    }
};