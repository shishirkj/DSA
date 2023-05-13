Given an array Arr of N positive integers and an integer K, find K largest elements from the array.  The output elements should be printed in decreasing order.

Example 1:

Input:
N = 5, K = 2
Arr[] = {12, 5, 787, 1, 23}
Output: 787 23
Explanation: 1st largest element in the
array is 787 and second largest is 23.
Example 2:

Input:
N = 7, K = 3
Arr[] = {1, 23, 12, 9, 30, 2, 50}
Output: 50 30 23
Explanation: 3 Largest element in the
array are 50, 30 and 23.


Expected Time Complexity: O(N + KlogK)
Expected Auxiliary Space: O(K+(N-K)*logK)

O(N) time is required to iterate over the array and push the elements onto the priority queue.
O(K log K) time is required to extract the top K elements from the priority queue.


//CODE
vector<int> kLargest(int arr[], int n, int k) {
	   // laergest diya hai to min heap
	    
	    priority_queue<int,vector<int>,greater<int>>min_hp;
	    
	    vector<int>ans;
	   
	   
	        for(int i =0;i<n;i++)
	        { 
	            min_hp.push(arr[i]);
	            // if size of min heap> k pop elements 
	            if(min_hp.size()>k)
	            { 
	                min_hp.pop();
	            }
	        }
	        
	        while(min_hp.size()>0)
	        { 
	            ans.push_back(min_hp.top());
	            min_hp.pop();
	        }
	        
	        reverse(ans.begin(),ans.end()); // only if asked to give o/p in particular order
	        return ans;
	}