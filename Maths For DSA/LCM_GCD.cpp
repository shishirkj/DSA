/*

Question -
LCM And GCD


Given two numbers A and B. The task is to find out their LCM and GCD.


Example 1:

Input:
A = 5 , B = 10
Output:
10 5
Explanation:
LCM of 5 and 10 is 10, while
thier GCD is 5.

problem link --> https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
*/


//CODE

class Solution {
    


private:
      long long  gcd(int a,int b)
  {
      while(a!=b)
      {
          if(a>b)
          a=a-b;
          else b=b-a;
      }
      return a;
  }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long>v;
        v.push_back(A*B/gcd(A,B));
        v.push_back(gcd(A,B));
        return v;
    
            
    
}
    
};