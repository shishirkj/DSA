/*
Question-
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.



Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

problem link --> https://leetcode.com/problems/roman-to-integer/description/


*/


//CODE

// BRUTE FORCE(NOT GOOD WAY TO SOLVE THIS QUESTION ) USE HASH TABLE
class Solution {
public:
    int romanToInt(string s) {
        vector<int>ans;int sum =0;int i=0;
             while(i<s.length()){
             if(s[i]=='I' && s[i+1]=='V'){
                ans.push_back(4);
                i+=2;
            }
            else if(s[i]=='I' && s[i+1]=='X'){
                ans.push_back(9);
                i+=2;
            }
             else if(s[i]=='X'&& s[i+1]=='L'){
                ans.push_back(40);
                i+=2;
            }
            else if(s[i]=='X'&& s[i+1]=='C'){
                ans.push_back(90);
                i+=2;
            }
             else if(s[i]=='C'&& s[i+1]=='D'){
                ans.push_back(400);
                i+=2;
            }
             else if(s[i]=='C'&& s[i+1]=='M'){
                ans.push_back(900);
                i+=2;
            }

           else if(s[i]=='I'){
                ans.push_back(1);i++;
            }
           else if(s[i]=='V'){
                ans.push_back(5);i++;
            }
           else if(s[i]=='X'){
                ans.push_back(10);i++;
            }
           else if(s[i]=='L'){
                ans.push_back(50);i++;
            }
          else  if(s[i]=='C'){
                ans.push_back(100);i++;
            }
           else if(s[i]=='D'){
                ans.push_back(500);i++;
            }
           else if(s[i]=='M') {
                ans.push_back(1000);i++;
            }
           
        }
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];

        }
        return sum;
        

    }
};