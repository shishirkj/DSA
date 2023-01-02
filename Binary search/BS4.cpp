/*
QUESTION -
Left most and right most index
Given a sorted array with possibly duplicate elements.
The task is to find indexes of first and last occurrences of an element X in the given array.
Note: If the element is not present in the array return {-1,-1} as pair.

 
Example :
Input:
N = 9
v[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}
X = 5
Output:
2 5
Explanation:
Index of first occurrence of 5 is 2
and index of last occurrence of 5 is 5.


QUESTION LINK --> https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article/ 

*/

//CODE


class Solution
{
    public:
    
    
    int firstocc(vector<long long> v, long long x){
        int ans =-1;
        int s =0;int e = v.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(x==v[mid]){
                ans = mid;
                e = mid-1;
               
            }
            else if(x>v[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
                 }
                
                    }
                     return ans;
                                        }
                                        
                                        
        int lastocc(vector<long long> v, long long x){
        int ans =-1;
        int s =0;int e = v.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;  //to avoid INTEGER OVERFLOW -->geeksforgeeks.org/how-to-avoid-integer-overflows-and-underflows-in-cpp/
            if(x==v[mid]){
                ans = mid;
                s = mid+1;
               
            }
            else if(x>v[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
                 }
                
                    }
                     return ans;
                                        }
    
    
    
    
    
    
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        pair<long,long>p;
        p.first = firstocc(v,x);
        p.second = lastocc(v,x);
        return p;
        
        
    }
};