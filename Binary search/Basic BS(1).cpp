/*


QUESTION -
Given a sorted array of size N and an integer K,
 find the position at which K is present in the array using binary search.

Example 1:

Input:
N = 5
arr[] = {1 2 3 4 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.

QUESTION LINK -->https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

//CODE
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        
    int start=0;

        int end=n-1;

        int mid=start + (end - start)/2; // To avoid INTEGER OVERFLOW
      // What is INTEGER OVERFLOW ?
      //--> geeksforgeeks.org/how-to-avoid-integer-overflows-and-underflows-in-cpp/

        

        while(start<=end){

            if(arr[mid]==k){

                return mid;

            }

            else if(arr[mid]<k){

                start=mid+1;

            }

            else{

                end=mid-1;

            }

            mid=start + (end - start)/2;

        }

        return -1;
    }
};


