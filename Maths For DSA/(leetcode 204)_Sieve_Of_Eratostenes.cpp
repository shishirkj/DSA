/*
Question -

Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0

Constraint: 0 <= n <= 5 * 106

problem link -->  https://leetcode.com/problems/count-primes/description/

*/


//CODE

class Solution {
public:
    int countPrimes(int n) {
        vector<bool>prime(n+1,true);int count =0;
               prime[0]=prime[1]==false;
                
               
        for(int i=2;i<n;i++){
            if(prime[i]==true){
                count++;
            
            for(int j=2*i;j<n;j = j+i){
                prime[j] = false;
            }
            }
        }
       
        return count;
    }
};
//--------------------------------xx----xx-----------------
//  OR


//CODE
class Solution {
public:
    int countPrimes(int n) {
        vector<bool>prime(n+1,true);int count =0;
               prime[0]=prime[1]==false;
                
               
        for(int i=2;i<=n/2;i++){
            for(int j=2*i;j<n;j = j+i){
                prime[j] = false;
            }   
        }
        for(int i=2;i<n;i++){
            if(prime[i]==true)
            count++;
        }
       
        return count;
    }
};