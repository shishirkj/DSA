/*
Question-
Given two strings A and B. Find the characters that are not common in the two strings. 

Note :- Return the string in sorted order.

Example 1:

Input:
A = geeksforgeeks
B = geeksquiz
Output: fioqruz
Explanation: 
The characters 'f', 'i', 'o', 'q', 'r', 'u','z' 
are either present in A or B, but not in both.
Example 2:

Input:
A = characters
B = alphabets
Output: bclpr
Explanation: The characters 'b','c','l','p','r' 
are either present in A or B, but not in both.

problem link --> https://practice.geeksforgeeks.org/problems/uncommon-characters4932/1?page=1&category[]=Strings&curated[]=1&sortBy=submissions

*/


//CODE

string UncommonChars(string A, string B)
        {
            // code here
            
            string ans ="";
            int arr[26]={0};int number =0;
            int brr[26] = {0};int number1 =0;
            for(int i=0;i<A.length();i++){ 
                 number = A[i]-'a';
                    arr[number]++;
            }
                
            for(int j=0;j<B.length();j++){ 
                number1 = B[j]-'a';
                brr[number1]++;
            }
            for(int i=0;i<26;i++){ 
                if(arr[i]>=1 && brr[i]== 0){ 
                    ans.push_back(i+'a');
                }
               
                  if(brr[i]>=1 && arr[i]== 0){ 
                    ans.push_back(i+'a');
                }
               
                
                }
                if(ans.size()==0){return "-1";}
                return ans;
               
            
            
        }