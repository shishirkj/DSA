/*
Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array).

Note: The low and high are inclusive.

Implement the partition() and quickSort() functions to sort the array.


Example 1:

Input: 
N = 5 
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9
Example 2:

Input: 
N = 9
arr[] = { 2, 1, 6, 10, 4, 1, 3, 9, 7}
Output:
1 1 2 3 4 6 7 9 10
*/

problem link -->https://practice.geeksforgeeks.org/problems/quick-sort/1


Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(logN)


//CODE

void quickSort(int arr[], int low, int high)
    {
       if(low>=high){return;}
         //partitioon karenpe
      int  p = partition(arr,low,high);
      
      
    //left part sort karo
      quickSort(arr,low,p-1);
      
        //right wala part sort karo
      quickSort(arr,p+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
     int pivot = arr[low];
      int count=0;
      for(int i=low+1;i<=high;i++)
      {
          if(pivot>=arr[i]){count++;}
      }
      //place pivot at right position
      int pivotIndex = low + count;
    swap(arr[pivotIndex], arr[low]);

       //left and right wala part smbhal lete h 
      int i=low;int j = high;
      
      while(i<pivotIndex && j>pivotIndex)
      {
          while(arr[i]<=pivot)
          {  
              i++;
          }
          while(arr[j]>pivot)
          {
              j--;
          }
          
          if(i<pivotIndex && j>pivotIndex)
          {
              swap(arr[i],arr[j]);
              i++;j--;
          }
          
          
      }
      return pivotIndex;
      
      
    
    }