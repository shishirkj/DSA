/*
Quesstion-




 Palindrome Number

 Given an integer x, return true if x is a 
palindrome,and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.


problem link --> https://leetcode.com/problems/palindrome-number/description/

*/


//CODE


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        if(x==0)
        return 1;
        string s1 = to_string(x);
        int r=0,l=s1.length()-1;
             while(r<l){
                 if(s1[r]==s1[l]){
                     r++;l--;}
                 else {
                     return 0;
                 }
             }
    return 1;
    }
};