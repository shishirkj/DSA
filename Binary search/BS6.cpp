/*
QUESTION - 
Given an ascending sorted rotated array Arr of distinct integers of size N. 
The array is right rotated K times. Find the value of K.

Example 1:

Input:
N = 5
Arr[] = {5, 1, 2, 3, 4}
Output: 1
Explanation: The given array is 5 1 2 3 4. 
The original sorted array is 1 2 3 4 5. 
We can see that the array was rotated 
1 times to the right.

QUESTION LINK --> https://practice.geeksforgeeks.org/problems/rotation4723/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

//CODE

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int s =0,e = n-1;
	    while(s<=e){
	        if (arr[s]<=arr[e]){
	            return s;
	        }
	        int mid = s+ (e-s)/2;  //to avoid INTEGER OVERFLOW -->geeksforgeeks.org/how-to-avoid-integer-overflows-and-underflows-in-cpp/
	        int next = (mid+1)%n;
	        int prev = (mid+n-1)%n;
	        if(arr[mid]<arr[next] && arr[mid]<arr[prev]){
	            return mid;
	        }
	         if(arr[mid]>=arr[s]){
	            s = mid+1;
	        }
	        if (arr[mid]<=arr[e]){
	            e = mid-1;
	        }
	         

	        
	                }
	             
	                   
	                
	           
	    
	    
	}

};