Allocate minimum number of pages


You have N books, each with Ai number of pages. M students need to be allocated contiguous books, with each student getting at least one book. Out of all the permutations, the goal is to find the permutation where the student with the most pages allocated to him gets the minimum number of pages, out of all possible permutations.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

 

Example 1:

Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output:113
Explanation:Allocation can be done in 
following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90} Maximum Pages =113.
Therefore, the minimum of these cases is 113,
which is selected as the output.

Example 2:

Input:
N = 3
A[] = {15,17,20}
M = 2
Output:32
Explanation: Allocation is done as
{15,17} and {20}
Your Task:
You dont need to read input or print anything. Your task is to complete the function findPages() which takes 2 Integers N, and m and an array A[] of length N as input and returns the expected answer.


Expected Time Complexity: O(NlogN)
Expected Auxilliary Space: O(1)



problem link --> https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1



//CODE


 bool isValid(int A[],int N,int k,int mid)
    { 
        int student = 1;  int sum =0;
        
        for(int i =0;i<N;i++)
        { 
            sum = sum+A[i];
            
            if(sum>mid)
            { 
                student++;
               sum = A[i];
            }
        }
        
        if(student>k){return false;}
        return true;
    }
    
    
    
    int findPages(int A[], int N, int M) 
    {
       if(M>N){return -1;}
       
       int mx = INT_MIN;
        int sum = 0;
        
        for (int i=0; i<N; i++) {
            mx = max(mx, A[i]);
            sum += A[i];
        }
        int res =-1;
        
        int start = mx; 
        int end = sum ;
        
        while(start<=end)
        { 
            int mid = start+(end-start)/2;
            
            if(isValid(A,N,M,mid))
            { 
                 res = mid;
                end = mid-1;
            }
            else
            { 
                start = mid+1;
            }
        }
        
        return res;
    }

