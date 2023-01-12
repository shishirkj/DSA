/*
Similar to leetcode 1910
Question -
Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s.
The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).

Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring
in GeeksForGeeks from index 5 (0 based indexing).

problem link --> https://practice.geeksforgeeks.org/problems/implement-strstr/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/



//CODE


int strstr(string s, string x)
{
     //Your code here
     while(s.length()!= 0 && s.find(x)<s.length()){
         return s.find(x);
     }
     return -1;
}