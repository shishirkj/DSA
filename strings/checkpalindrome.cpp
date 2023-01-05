/* Problem Statement-

You are given a string 'S'.Your task is to check wheter the string is palindrome or not.For checking palindrome,consider alphabets and numbers only and ignore the symbols and whitesoaces.


Note:
String 'S' is NOT case sensitive 

Example :

S = "c1 0$d@eeD 01c"
o/p = 1


PROBLEM LINK --> https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0
*/


//CODE
#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
    string s1 = ""; char ch;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>= '0'&&s[i]<='9'){
            s1.push_back(s[i]);
        }
        else if(s[i]>='A'&& s[i]<= 'Z'){
            ch=s[i]-'A'+'a';
            s1.push_back(ch);
        }
        
    }
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
