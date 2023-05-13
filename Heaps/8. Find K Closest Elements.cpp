Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or
|a - x| == |b - x| and a < b
 

Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]
Example 2:

Input: arr = [1,2,3,4,5], k = 4, x = -1
Output: [1,2,3,4]


 T.C-->O(n log k)   |||   O(n)-->traversing array and o(logk)-->heap build


 S.C-->O(k),



problem link --> https://leetcode.com/problems/find-k-closest-elements/description/

  vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>max;

        for(int i =0;i<arr.size();i++)
        { 
            // making pair and as we know it prioritize on basis p.first
            max.push({abs(arr[i]-x),arr[i]});

            if(max.size()>k)
            { 
                max.pop();
            }
        }

        //leftover elements in heap are answers
            vector<int>ans;
        while(!max.empty())
        { 
            ans.push_back(max.top().second);
            max.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};