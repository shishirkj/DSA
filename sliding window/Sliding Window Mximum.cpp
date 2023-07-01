 Sliding Window Maximum



You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.

 

Example 1:

Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
Example 2:

Input: nums = [1], k = 1
Output: [1]




//CODE

  vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        
        vector<int>ans; list<int>l;
        int i =0;int j =0;
        
         while(j<n){
             
             //calc
            while(l.size()>0 && arr[j]>l.back())
            {
            l.pop_back();
            }
            l.push_back(arr[j]);

            if(j-i+1 < k) j++;
            else if(j-i+1 == k){
                
                
                ans.push_back(l.front());
                    
                //to check condition    
                if(l.front()==arr[i])
                l.pop_front();
                i++;
                j++;
            }
        }
        return ans;
    }