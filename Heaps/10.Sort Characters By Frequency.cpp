Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

 

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.

T.C-->   O(n log n)
S.C-->   O(n)

//question link --> https://leetcode.com/problems/sort-characters-by-frequency/description/



//CODE
  string frequencySort(string s) {
        unordered_map<char,int>mp;

        priority_queue<pair<int,int>>max; string str ="";


        for(int i=0;i<s.length();i++)
        { 
            mp[s[i]]++;
        }

        for(auto i =mp.begin();i!=mp.end();i++)
        { 
                max.push({i->second,i->first});
        }
            while(!max.empty())
            { 
                int frequency = max.top().first;
                char alpha = max.top().second;
                for(int i =0;i<frequency;i++)
                { 
                    str.push_back(alpha);
                }
                max.pop();
            }
            return str;
    }