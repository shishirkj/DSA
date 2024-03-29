Aggressive Cows

You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
The first line of input contains two space-separated integers n and k.
The second line contains n space-separated integers denoting the position of the stalls.

Example 1:

Input:
n=5 
k=3
stalls = [1 2 4 8 9]
Output:
3
Explanation:
The first cow can be placed at stalls[0], 
the second cow can be placed at stalls[2] and 
the third cow can be placed at stalls[3]. 
The minimum distance between cows, in this case, is 3, 
which also is the largest among all possible ways.
Example 2:

Input:
n=5 
k=3
stalls = [10 1 2 7 5]
Output:
4
Explanation:
The first cow can be placed at stalls[0],
the second cow can be placed at stalls[1] and
the third cow can be placed at stalls[4].
The minimum distance between cows, in this case, is 4,
which also is the largest among all possible ways.


Expected Time Complexity: O(n*log(10^9)).
Expected Auxiliary Space: O(1).



//CODE
class Solution {
public:


bool isValid(int k,vector<int>arr,int mid)
{ 
    int cowsCount = 1;
    int position = arr[0];
    
    for(int i =1;i<arr.size();i++) // we can start with 1 also
    { 
        if(arr[i]-position>=mid)
        { 
            cowsCount++;
            position = arr[i];
        }
        if(cowsCount==k){return true;}
    }
    
   
    return false;
}



    int solve(int n, int k, vector<int> &stalls) {
    
    //since array not sorted
    sort(stalls.begin(),stalls.end());
    
    int maxi = INT_MIN;
    
    for(int i =0;i<stalls.size();i++)
    {
     maxi = max(maxi,stalls[i]);
    }
    
    int start = 0; // minimum distance to zero hoga saare cows(k) ek hi stall mein
    
    int end = maxi;// waise hona chaiye maximum - minimum  butjust taking max
    
    
            //since asked maximum we store right most
            
            int res =-1;
            while(start<=end)
            { 
                int mid = start+(end-start)/2;
                
                if(isValid(k,stalls,mid))
                { 
                    res  = mid;
                    start  = mid+1;
                }
                else
                { 
                    end = mid-1;
                }
            }
            
            return res;
    
    }
    
