/*
Question-
Given a sentence in the form of a string in uppercase, convert it into its equivalent mobile numeric keypad sequence. Please note there might be spaces in between the words in a sentence and we can print spaces by pressing 0.



 

Example 1:

Input:
S = "GFG"
Output: 43334
Explanation: For 'G' press '4' one time.
For 'F' press '3' three times.
Example 2:

Input:
S = "HEY U"
Output: 4433999088
Explanation: For 'H' press '4' two times.
For 'E' press '3' two times. For 'Y' press '9' 
three times. For white space press '0' one time.
For 'U' press '8' two times.

problem link --> https://practice.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1?page=1&category[]=Strings&curated[]=1&sortBy=submissions
*/


//CODE
string printSequence(string S)
{
    //code here.
     vector<string> v={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};

    string ans;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]==' ')
        ans+="0";
        else
        ans+=v[S[i]-'A'];
    }
    return ans;
   }