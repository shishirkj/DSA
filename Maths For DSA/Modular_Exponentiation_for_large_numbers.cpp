/*


PRE REQUISITE -
https://codeforces.com/blog/entry/72527

Question -
Implement pow(x, n) % M.
In other words, given x, n and M, find (xn) % M.

Example 1:

Input:
x = 3, n = 2, m = 4
Output:
1
Explanation:
32 = 9. 9 % 4 = 1.


problem link --> https://practice.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
same question problem link -->      https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7

*/


//CODE

class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{ 
		    // Code 
		                int res =1;
		                while(n>0){
		                    
		                   if(n&1){
		                   
                            res = (1LL* res*x%M)%M;		                       
		                       
		                   }
		                   		x =(1LL* x%M*x%M)%M;
			  n = n>>1;
			}
			return res;

		                   
		                   
		                   
		                
		}
};