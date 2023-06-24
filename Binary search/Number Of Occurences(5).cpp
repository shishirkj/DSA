/*
QUESTION -
Number of occurrence
Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Example :

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.


QUESTION LINK --> https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/

//CODE

class Solution{
public:	
		int firstocc(int arr[],int n,int x){
		    int first=1;
		    int s =0;int e = n-1;
		    while(s<=e){
		        int mid = s+(e-s)/2;
		        if(arr[mid]==x){
		            first = mid;
		            e = mid-1;
		        }
		        else if(arr[mid]<x){
		            s = mid+1;
		        }
		        else{
		            e = mid-1;
		        }
		        }
		        return first;
		    }
		       
		    int lastocc(int arr[],int n,int x){
		    int last =0;
		    int s =0;int e = n-1;
		    while(s<=e){
		       int mid = s+(e-s)/2;  //to avoid INTEGER OVERFLOW -->geeksforgeeks.org/how-to-avoid-integer-overflows-and-underflows-in-cpp/
		        if(arr[mid]==x){
		            last =mid;
		            s = mid+1;
		        }
		        else if(arr[mid]<x){
		            s = mid+1;
		        }
		        else{
		            e = mid-1;
		        }
		        }
		        return last;
		    }
		   
	 int count(int arr[], int n, int x) {
	  
	    int  first = firstocc( arr,n, x);
	   
	int last = lastocc( arr, n, x);
	int occ = (last-first)+1;
	   
	   
	   
	}
};
