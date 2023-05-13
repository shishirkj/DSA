Given an array of size N. The task is to sort the array elements by completing functions heapify() and buildHeap() which are used to implement Heap Sort.


Example 1:

Input:
N = 5
arr[] = {4,1,3,9,7}
Output:
1 3 4 7 9
Explanation:
After sorting elements
using heap sort, elements will be
in order as 1,3,4,7,9.
Example 2:

Input:
N = 10
arr[] = {10,9,8,7,6,5,4,3,2,1}
Output:
1 2 3 4 5 6 7 8 9 10
Explanation:
After sorting elements
using heap sort, elements will be
in order as 1, 2,3,4,5,6,7,8,9,10.

Expected Time Complexity: O(N * Log(N)).
Expected Auxiliary Space: O(1).

problem link --> https://practice.geeksforgeeks.org/problems/heap-sort/1




//CODE

class Solution
{
    public:
    //Heapify function to maintain heap property.
 void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
      int largest = i; //initialise largest as root
      int l = 2*i+1; //left
      int r = 2*i+2; //right
      
      //if left child is larger than root
      if(l<n && arr[l]>arr[largest])
        largest = l;
       
      // if right child is larger than largest so far
      if(r<n && arr[r]>arr[largest])
        largest = r;
      
      //if largest is not root
      if(largest!=i){
          swap(arr[i],arr[largest]);
          
          //recursively heapify
          heapify(arr,n,largest);
      }
      else{
          return;
      }
    }
      
    

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    //build heap(rearrange array)
    for(int i = n/2-1;i>=0;i--)
        heapify(arr,n,i);
        return;
        
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        buildHeap(arr,n);
        
        for(int i = n-1; i>0;i--){
            swap(arr[0],arr[i]); //move current root to end
            heapify(arr,i,0);
        }
    }
};
