/*
QUESTION -

Given a string str. The task is to find the maximum occurring character in the string str.
If more than one character occurs the maximum number of time then print the lexicographically
smaller character.

Example :

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency

Question link --> https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

*/



//CODE

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
      int arr[26] = {0}; int number =0;
      for(int i=0;i<str.length();i++){
           char ch = str[i];
           number = ch-'a';
           arr[number]++;
      }
      int max =-1;int ans =0;
      for(int i=0;i<26;i++){
          if(max<arr[i]){
              max =arr[i];
              ans =i;
          }
      }
      return ans+ 'a';
    }

};