/*
QUESTION - 
Floor in a Sorted Array

Given a sorted array arr[] of size N without duplicates, and given a value x.
 Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. 
 Find the index of K(0-based indexing).

Example :

Input:
N = 7, x = 0 
arr[] = {1,2,8,10,11,12,19}
Output: -1
Explanation: No element less 
than 0 is found. So output 
is "-1".

QUESTION LINK --> https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/



//CODE

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int s = 0,e =n-1;int res=-1;
        while(s<=e){
           int mid = s+(e-s)/2; //to avoid INTEGER OVERFLOW -->geeksforgeeks.org/how-to-avoid-integer-overflows-and-underflows-in-cpp/
            if(v[mid] == x){
                return mid;
                            }
            else if (v[mid]<x){
                res = mid;
                s = mid+1;
                                }
            else if (v[mid]>x){
                e = mid-1;
                }
                        }
                        return res;
        
    }
};
