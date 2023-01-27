/*
Question-
Rotate String
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

 Example 1:
Input: s = "abcde", goal = "cdeab"
Output: true


Example 2:
Input: s = "abcde", goal = "abced"
Output: false


problem link --> https://leetcode.com/problems/rotate-string/description/


*/



//CODE

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
        { return 0;
        }
         s = s+s;
             if(s.find(goal)<s.length())
             return 1;
         return 0;

    }
};