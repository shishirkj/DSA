/*
Question -
Given two integers M and N, generate all primes between M and N including M and N.


Example 1:

Input:
M=1,N=10
Output:
2 3 5 7
Explanation:
The prime numbers between 1 and 10
are 2,3,5 and 7.



Question link --> https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range4718/1

*/


//CODE

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        vector<bool>prime(N+1,true);vector<int>ans;
                    prime[0] = false;
                    prime[1] = false;
        
        for(int i=2;i<=N/2;i++){
            for(int j=2*i;j<=N;j=j+i){
                prime[j] = false;
            }
        }
        for(int i=M;i<=N;i++){
            if(prime[i]==true){
            ans.push_back(i);
        }
        
        }
         return ans;
        
        
    }
};