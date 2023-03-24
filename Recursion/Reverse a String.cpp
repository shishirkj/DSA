/*
Question-
Reverse a String

You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
Example 2:

Input:
s = for
Output: rof
Your Task:

You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

problem link --> https://practice.geeksforgeeks.org/problems/reverse-a-string/1

*/


//CODE

string reverseWord(string str){
    int n = str.length();
    if(n==1)
    {return str;}
    
    if(str.length() ==2)
    {swap(str[0],str[n-1]);
        return str;
    }
    
  return str[n-1] + reverseWord(str.substr(1, n-2)) + str[0];

}