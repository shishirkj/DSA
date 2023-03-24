/*
//QUESTION-
Given a number and its reverse. Find that number raised to the power of its own reverse.
Note: As answers can be very large, print the result modulo 109 + 7.

Example 1:

Input:
N = 2
Output: 4
Explanation: The reverse of 2 is 2
and after raising power of 2 by 2 
we get 4 which gives remainder as 
4 by dividing 1000000007.
Example 2:

Input:
N = 12
Output: 864354781
Explanation: The reverse of 12 is 21
and 1221 , when divided by 1000000007 
gives remainder as 864354781.

Problem link --> https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1
*/


//CODE
if 

  long long power(int N,int R)
    {
      if(R==0){return 1;}
     if(N==1){return 1;}
      if(N==0){return 0;}
     if(R==2){return N*N;}
     
     int MOD = 1e9+7;
     
      long long ans = (N%MOD*(power(N,R-1)%MOD))%MOD;
      
      return ans;
     
        