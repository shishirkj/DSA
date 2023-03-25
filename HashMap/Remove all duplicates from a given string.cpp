/*
Question-
Remove all duplicates from a given string


Given a string Str which may contains lowercase and uppercase chracters. The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be same as in the original string.

Example 1:

Input:
Str = geeksforgeeks
Output: geksfor
Explanation: After removing duplicate
characters such as e, k, g, s, we have
string as "geksfor".
Example 2:

Input:
Str = HappyNewYear
Output: HapyNewYr
Explanation: After removing duplicate
characters such as p, e, a, we have
string as "HapyNewYr".

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
question link --> https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1?page=2&category[]=Arrays&curated[]=7&sortBy=submissions
*/


//CODE

	string removeDuplicates(string str) {
	    unordered_map<char,int>mp;
	    for(int i=0;i<str.length();i++)
	    {
	        char ch = str[i];
	        mp[ch]++;
	    }
	    string ans="";
	    for(int i=0;i<str.length();i++)
	    {
	        char ch = str[i];
	        if(mp[ch]>=1)
	        {
	             ans.push_back(ch);
	            mp.erase(ch);
	           
	        }
	        
	    }
	    return ans;;
	  
	}