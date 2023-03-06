/*
Question-
Remove DuplicatesGiven a string without spaces, the task is to remove duplicates from it.

Note: The original order of characters must be kept the same. 

Example 1:

Input: S = "zvvo"
Output: "zvo"
Explanation: Only keep the first
occurrence
Example 2:

Input: S = "gfg"
Output: gf
Explanation: Only keep the first
occurrence

problem link --> https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1?page=4&curated[]=1&sortBy=submissions


*/

//CODE


	string removeDups(string S) 
	{
	    

     set<char> st;

     string out;

     for(auto ch : S)

     {

         if(st.find(ch) == st.end())

         {

             out+=ch;

             st.insert(ch);

         }

     }

     return out;

 }