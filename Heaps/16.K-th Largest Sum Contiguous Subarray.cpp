Example 1:

Input:
N = 3
K = 2
Arr = {3,2,1}
Output:
5
Explanation:
The different subarray sums we can get from the array
are = {6,5,3,2,1}. Where 5 is the 2nd largest.
 

Example 2:

Input:
N = 4
K = 3
Arr = {2,6,4,1}
Output:
11
Explanation:
The different subarray sums we can get from the array
are = {13,12,11,10,8,6,5,4,2,1}. Where 11 is the 3rd largest.
 

 problem link --> https://practice.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1





 //CODE

 brute force:

 for(i=0;<N)
 { 
    int sum =0;
    for(j=i;<N)
    { 
            sum+=A[j];
            ans.push(sum);
    }
 }

 sort(ans);
 return arr[n-k];



 //BETTER APPROACH

 Expected Time Complexity: O(N2 * log K)
Expected Auxiliary Space: O(K)

 

 // USE BRUTE FORCE AND MODIFY USING MIN HEAP



  int kthLargest(vector<int> &Arr,int N,int K){
            
           
            priority_queue<int,vector<int>,greater<int>>min;
            
            for(int i =0;i<N;i++)
            { 
                 int sum =0;
                for(int j =i;j<N;j++)
                { 
                    sum = sum+Arr[j];
                    min.push(sum);
                    
                    if(min.size()>K)
                    { 
                        min.pop();
                    }
                }
            }
            
            return min.top();
    }