Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]


problem link --> https://leetcode.com/problems/top-k-frequent-elements/description/



T.C-->   O(n + k log k)
S.C-->      O(n + k) 



The first loop iterates over the input array once, so its time complexity is O(n).

The second loop iterates over the map once, so its time complexity is O(n).

The third loop pushes k elements onto the priority queue, so its time complexity is O(k).

The fourth loop pops k elements off the priority queue, so its time complexity is O(k).

The fifth loop sorts the output array, so its time complexity is O(k log k).

Therefore, the total time complexity of the code is O(n + k log k).



The map and the priority queue store O(n) elements, and the output array stores O(k) elements. Therefore, the total space complexity of the code is O(n + k).




//CODE

   for(int i =0;i<nums.size();i++)
       { 
           mp[nums[i]]++;
       }
       
     
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min;
       
            for(auto i= mp.begin();i!=mp.end();i++)
            { 
                min.push({i->second,i->first});
                
                if(min.size()>k)
                { 
                    min.pop();
                }
            }
       
            
            vector<int>ans;
          
            while(!min.empty())
            { 
                ans.push_back(min.top().second);
                min.pop();
            }
            sort(ans.begin(),ans.end());
            return ans;
       
       
    }