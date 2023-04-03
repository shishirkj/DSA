 Letter Combinations of a Phone Number
 Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]

Expected Time Complexity: O(4N * N).
Expected Auxiliary Space: O(N).


//problem link --> https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

//code

void solve(string digits,vector<string>&ans,string output,string mapping[],int index)
   {
       //base case
       if(index>=digits.length())
       {   
           ans.push_back(output);
           return;
       }

       //getting the number by converting it from character to digit --> (ex: '2'==2)
            int number = digits[index]-'0';

         // getting all the characters of that digit/number thru mapping  (ex: 2-->a,b,c)

          string  value = mapping[number];


         //recursion for each character of that number
         for(int i =0;i<value.length();i++)
         {
             output.push_back(value[i]);
             solve(digits,ans,output,mapping,index+1);
             //backtrack it so we can get empty string and process for other numbers too
             output.pop_back();
         }

   } 
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans  ; string output = "";
        if(digits.length()==0){return ans;}

        //mapping all digits caharacters
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index =0;

        solve(digits,ans,output,mapping,index);
        return ans;

    }