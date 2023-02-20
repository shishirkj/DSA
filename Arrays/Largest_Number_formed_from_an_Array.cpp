/*
Question-









































Largest Number formed from an Array


Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.

Example 1:

Input: 
N = 5
Arr[] = {3, 30, 34, 5, 9}
Output: 9534330
Explanation: Given numbers are {3, 30, 34,
5, 9}, the arrangement 9534330 gives the
largest value.
Example 2:

Input: 
N = 4
Arr[] = {54, 546, 548, 60}
Output: 6054854654
Explanation: Given numbers are {54, 546,
548, 60}, the arrangement 6054854654 
gives the largest value.


problem link --> https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1?page=1&difficulty[]=1&curated[]=1&sortBy=submissionshttps://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1?page=1&difficulty[]=1&curated[]=1&sortBy=submissionshttps://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1?page=1&difficulty[]=1&curated[]=1&sortBy=submissionshttps://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1?page=1&difficulty[]=1&curated[]=1&sortBy=submissionshttps://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1?page=1&difficulty[]=1&curated[]=1&sortBy=submissions
*/


//CODE


static bool check(string &s1,string &s2){
    return (s1+s2)>(s2+s1);
}

string printLargest(vector<string> &nums) {
	    // code here
    sort(nums.begin(),nums.end(),check);
    
    string ans="";
    for(auto i:nums){
        ans+=i;
    }
    
    return ans;
	}