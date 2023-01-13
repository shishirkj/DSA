/*

Question -

Given two strings a and b.
The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.


example 1 -
a = amazon
b = azonam

example 2 -
a = fsbcnuvqhffbsaqxwp
b = wpfsbcnuvqhffbsaqx


problem link --> https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1?page=1&category[]=Strings&sortBy=submissions

*/


//CODE
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
       for(int i=0;i<str1.size();i++)
        {
            if((str2[i]!=str1[(i+2)%str1.size()])&&(str1[i]!=str2[(i+2)%str1.size()]))return false;
        }
        return true;
    }

};
