/*
Question
Sample Input 1:
1 
abc
Sample Output 1:
a ab abc ac b bc c
Explanation Of Sample Input 1:
All possible subsequences of abc are :  
“a” , “b” , “c” , “ab” , “bc” , “ac”, “abc”
Sample Input 2:
1
bbb
Sample Output 2:
b b b bb bb bb bbb


problem link --> https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0

*/


//CODE


//since the sub sequence will be 2^n for ex = a b c--> 2^3 = 8
so t.c --> O(2N)




void solve(string str,int index,string output,vector<string>&ans)
{
	//base case
        if (index >= str.length()) {
          if (output.length() > 0) {
            ans.push_back(output);
           
          }
		   return;
        }

        //exclude
		
	solve(str,index+1,output,ans);

	//include
	char character = str[index];

	output.push_back(character);

	solve(str,index+1,output,ans); 

}
vector<string> subsequences(string str){
	
	vector<string>ans;string output= "";
	int index =0;

	solve(str,index,output,ans);

		
				return ans;
	
}