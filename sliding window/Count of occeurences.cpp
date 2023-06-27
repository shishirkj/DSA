Count Occurences of Anagrams
MediumAccuracy: 48.09%Submissions: 55K+Points: 4
Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
Given a word pat and a text txt. Return the count of the occurrences of anagrams of the word in the text.

Example 1:

Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.
Example 2:

Input:
txt = aabaabaa
pat = aaba
Output: 4
Explanation: aaba is present 4 times
in txt.
Your Task:
Complete the function search() which takes two strings pat, txt, as input parameters and returns an integer denoting the answer. 
You don't need to print answer or take inputs.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(26) or O(256)







//CODE


int search(string pat, string txt) {
    int arr[26] = {0};
    int arr2[26] = {0};
    int count = 0;
  
    // Edge case
    if (pat.length() > txt.length()) {
        return 0;
    }
  
    for (int i = 0; i < pat.length(); i++) { 
        int number = pat[i] - 'a';
        arr[number]++;
    }
  
    int i = 0;
    int j = 0;
  
    while (j < txt.length()) {
        int number = txt[j] - 'a';
        arr2[number]++;
        
        if (j - i + 1 < pat.length()) {
            j++;
        } else if (j - i + 1 == pat.length()) {
            // comparing both arrays each elements equal or not 
            if (memcmp(arr, arr2, sizeof(arr2)) == 0) {
                count++;
            }
          
            int remove = txt[i] - 'a';
            arr2[remove]--;
          
            i++;
            j++;
        }
    }
  
    return count;
}