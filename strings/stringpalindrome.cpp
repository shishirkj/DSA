/*
What is palindrome ?
A word, phrase, or sequence,or number that reads the same backwards as forwards.   Example -> madam,racecar,noon.

Question -
Check if the given string is palindrome or not 

Example
racecar ----> Yes
fighting ---->No
noon ------>Yes

*/


//CODE

#include<string>
#include<iostream>
#include<vector>
using namespace std;
//function 
class Solution {
public:
 void StringPalindrome(vector<char>& s){
int start =0;int end = s.size()-1;
while(s<e){
        if(s[start]!=s[end]){
            return 0;
        }
        else{
            start++;end--
        }

}
return 1;
 }
