/*
Problem Statement -

Detailed explanation ( Input/output format, Notes, Constraints, Images )

Sample Input :
2
Coding Ninjas Is A Coding Platform
Hello World


Sample Output 1:
Coding@40Ninjas@40Is@40A@40Coding@40Platform
Hello@40World

Question link --> https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0
*/



//CODE


#include <bits/stdc++.h> 
string replaceSpaces(string &str){
    // Write your code here.
 string temp ="";
    for(int i=0;i<str.length();i++){
        if(str[i]== ' '){
            temp.push_back('@');
             temp.push_back('4');
             temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
        return temp;
        
}