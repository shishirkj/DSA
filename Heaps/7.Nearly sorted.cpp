Nearly sorted

Given an array of n elements, where each element is at most k away from its target position, you need to sort the array optimally.

Example 1:

Input:
n = 7, k = 3
arr[] = {6,5,3,2,8,10,9}
Output: 2 3 5 6 8 9 10
Explanation: The sorted array will be
2 3 5 6 8 9 10
Example 2:

Input:
n = 5, k = 2
arr[] = {3,1,4,2,5}
Output: 1 2 3 4 5 


problem link --> https://practice.geeksforgeeks.org/problems/nearly-sorted-1587115620/1


Expected Time Complexity : O(nlogk)
Expected Auxilliary Space : O(n)



//CODE

 vector <int> nearlySorted(int arr[], int num, int K){
       // sorted --> min heap k--> heap
       
       
       priority_queue<int,vector<int>,greater<int>>min;
       vector<int>ans;
       
       for(int i =0;i<num;i++)
       { 
           min.push(arr[i]);
           
           //[i+k,i-k] ke range mein me hai
           
           if(min.size()>K)
           { 
               ans.push_back(min.top());
               min.pop();
           }
       }
       
       // remaining elements left cauz not going in if block as no more elements
       while(!min.empty())
       {
           ans.push_back(min.top());
           min.pop();
       }
       
       retu