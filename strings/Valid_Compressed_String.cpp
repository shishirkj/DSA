A special compression mechanism can arbitrarily delete 0 or more characters and replace them with the deleted character count.
Given two strings, S and T where S is a normal string and T is a compressed string, determine if the compressed string  T is valid for the plaintext string S. 


Example 1:

Input:
S = "GEEKSFORGEEKS"
T = "G7G3S"
Output:
1
Explanation:
We can clearly see that T is a valid 
compressed string for S.

Example 2:

Input:
S = "DFS"
T = "D1D"
Output :
0
Explanation:
T is not a valid compressed string.


problem link --> https://practice.geeksforgeeks.org/problems/13eb74f1c80bc67d526a69b8276f6cad1b8c3401/1


//CODE
class Solution {
  public:
    int checkCompressed(string S, string T) {
        int i = 0;
        int j = 0;
        
        while(i < S.size() && j < T.size()){
            if(S[i] == T[j]){
                i++;
                j++;
            }
            else if(isdigit(T[j])){
                string deletedCount = "";
                while(j < T.size() && isdigit(T[j])){
                    deletedCount.push_back(T[j]);
                    j++;
                }
                
                i += stoi(deletedCount);
            }
            else{
                return 0;
            }
        }
        
        if(i == S.size() && j == T.size())
            return 1;
            
        return 0;
    }
};