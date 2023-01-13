/*
Anagram

Question -
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different.
For example, act and tac are an anagram of each other.

Example 1:

Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with same frequency. So, both are anagrams.

problem link --> https://practice.geeksforgeeks.org/problems/anagram-1587115620/1?page=1&category[]=Strings&sortBy=submissions
*/


//CODE
class Solution
{

    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        if(a.length()!=b.length()){
            return 0;
        }
        int arr[26] = {0};int count; int arr1[26] = {0};
        for(int i=0;i<a.length();i++){
            count = a[i]- 'a';
            arr[count]++;
        }
          for(int i=0;i<b.length();i++){
            count = b[i]- 'a';
            arr1[count]++;
        }
       for(int i=0;i<26;i++){
           if(arr[i]!=arr1[i]){
               return 0;
           }
       }
       return 1;
    }

};