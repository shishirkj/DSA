The Painters Partition Problem



Dilpreet wants to paint his dogs home that has n boards with different lengths. The length of ith board is given by arr[i] where arr[] is an array of n integers. He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board. 

The problem is to find the minimum time to get this job done if all painters start together with the constraint that any painter will only paint continuous boards, say boards numbered {2,3,4} or only board {1} or nothing but not boards {2,4,5}.


Example 1:

Input:
n = 5
k = 3
arr[] = {5,10,30,20,15}
Output: 35
Explanation: The most optimal way will be:
Painter 1 allocation : {5,10}
Painter 2 allocation : {30}
Painter 3 allocation : {20,15}
Job will be done when all painters finish
i.e. at time = max(5+10, 30, 20+15) = 35
Example 2:

Input:
n = 4
k = 2
arr[] = {10,20,30,40}
Output: 60
Explanation: The most optimal way to paint:
Painter 1 allocation : {10,20,30}
Painter 2 allocation : {40}
Job will be complete at time = 60




Expected Time Complexity: O(n log m) , m = sum of all boards length
Expected Auxiliary Space: O(1)



//CODE
bool isValid(int arr[], int n, int k, long long mid) {
    long long painter = 1;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        
        sum += arr[i];
        if (sum > mid) {
            painter++;
            
            sum = arr[i];
        }
        if (painter > k || arr[i]>mid ){ // edge case   // If a single board length exceeds mid(maximum time), it is not possible to paint within the given time
            return false;
        }
    }

    return true;
}


    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        
        long long sum =0;   int maxi = 0;
    for(int i =0;i<n;i++)
    { 
        maxi = max(maxi,arr[i]);
        sum+=arr[i];
    }
    
   long long start = 1;  // ek board(1m length) ko paint ke liye ek time to lagega hi  like ar[]: {1}
    long long end = sum;   // ek board unit to maximum sum of all boards that will be time
    long long  res =-1;
    
            while(start<=end)
            { 
                long long mid  = start+(end-start)/2;
                
                
                if(isValid(arr,n,k,mid))
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