/*

Question -
Reverse words in a given string
Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example:

Input:

S = i.like.this.program.very.much

Output: much.very.program.this.like.i

Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i


Question link --> https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article 

*/


//CODE

class Solution
{
    string reverse(string str)
   
    {

        int s = 0;

        int e = str.length()-1;

        

        while(s < e)

            swap(str[s++], str[e--]);

        return str;

    }

    public:
    //Function to reverse words in a given string.
    

    

    string reverseWords(string S) 

    { 

        string temp = "";

        string ans = "";

        for(int i = S.length()-1; i >= 0; i--)

        {

            if(S[i] != '.')

                temp += S[i];

            

           else{

                temp = reverse(temp);

                ans += temp;

                ans += '.';

                temp = "";

            }

        }

        

        int i = 0;

        while(S[i] != '.' && i < S.length())

            ans += S[i++];

        return ans;

    
    } 
};