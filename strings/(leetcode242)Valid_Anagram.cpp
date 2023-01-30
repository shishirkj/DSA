/*
Question-
 Valid Anagram

 Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.

 

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

problem link --> https://leetcode.com/problems/valid-anagram/description/

*/



//CODE
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){return 0;}
      int arr[26]={0};int count;
      for(int i=0;i<s.length();i++){
          count = s[i]-'a';
          arr[count]++;
      }
       int arr1[26]={0};int count1;
      for(int i=0;i<t.length();i++){
          count1 = t[i]-'a';
          arr1[count1]++;
      }
                int i=0;
                while(i<26){
                    if(arr[i]==arr1[i])
                    i++;
                    else
                    return 0;
                }
                return 1;


}

    
};