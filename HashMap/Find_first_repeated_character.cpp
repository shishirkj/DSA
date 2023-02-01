/*
Question-
Find first repeated character

Given a string S. The task is to find the first repeated character in it. We need to find the character that occurs more than once and whose index of second occurrence is smallest.
S contains only lowercase letters.


Example 1:
Input: S="geeksforgeeks"
Output: e
Explanation: 'e' repeats at third position.
 

Example 2:
Input: S="hellogeeks"
Output: l
Explanation: 'l' repeats at fourth position.
 

Example 3:
Input: S="abc"
Output: -1
Explanation: There is no repeated character.



problem link --> https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1?page=1&difficulty[]=-1&curated[]=1&sortBy=submissions


*/

//CODE
string firstRepChar(string s)

{

    //code here.

    unordered_map<char,int> mp;

    string ans="";

    for(int i=0;i<s.length();i++)

    {

        mp[s[i]]++;

        if(mp[s[i]]>1)

        {

            ans= ans+s[i];

            return ans;

        }

    }

    return "-1";

}