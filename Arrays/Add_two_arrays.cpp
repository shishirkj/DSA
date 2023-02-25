/*
Question



The array-form of an integer num is an array representing its digits in left to right order.

For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

 

Example 1:

Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234
Example 2:

Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455
Example 3:

Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021


problem link --> https://leetcode.com/problems/add-to-array-form-of-integer/description/
*/


//CODE
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
           vector<int>ans;int carry =0;string s = "";
           s =to_string(k);
                int i =num.size()-1;int j = s.length()-1; 
                  while(i>=0||j>=0||carry!=0){ 
					int val1=0;
        if(i>=0){ 
            val1=num[i];
        }
         int val2=0;
        if(j>=0){ 
            val2=s[j]-'0';
        }
                    
                       int sum = val1+val2+carry;
                    int digit= sum%10;
                    ans.push_back(digit);
                    carry = sum/10;
					if(i>=0)
                    i--;
					if(j>=0)
					j--;
                }
                reverse(ans.begin(),ans.end());
                return ans;
              
    }
};


//code
//PROBLEM LINK --> https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTab=1

#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
		vector<int>ans;int carry =0;
	int i =n-1;int j = m-1; 
                while(i>=0||j>=0||carry!=0){ 
					int val1=0;
        if(i>=0){ 
            val1=a[i];
        }
         int val2=0;
        if(j>=0){ 
            val2=b[j];
        }
                    
                       int sum = val1+val2+carry;
                    int digit= sum%10;
                    ans.push_back(digit);
                    carry = sum/10;
					if(i>=0)
                    i--;
					if(j>=0)
					j--;
                }
				reverse(ans.begin(),ans.end());
				return ans;
}