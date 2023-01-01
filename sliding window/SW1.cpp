//QUESTION -->  Max Sum Subarray of size K
/* EXAMPLE - 
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.

*/

//CODE
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0,j=0;long long sum=0;long long maxi = INT_MIN;
        if(K>N) return -1;
        while(j<N){
            sum = sum+Arr[j];
            if(j-i+1<K){
                j++;
            }
            else if(j-i+1==K){
                maxi = max(maxi,sum);
                
                sum = sum-Arr[i];
                i++;j++;
            }
        }
        return maxi;
    }
};
