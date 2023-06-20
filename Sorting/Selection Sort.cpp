
Question-


Selection Sort




Given an unsorted array of size N, use selection sort to sort arr[] in increasing order.


Example 1:

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}
Output:
1 3 4 7 9
Explanation:
Maintain sorted (in bold) and unsorted subarrays.
Select 1. Array becomes 1 4 3 9 7.
Select 3. Array becomes 1 3 4 9 7.
Select 4. Array becomes 1 3 4 9 7.
Select 7. Array becomes 1 3 4 7 9.
Select 9. Array becomes 1 3 4 7 9.
Example 2:

Input:
N = 10
arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
Output:
1 2 3 4 5 6 7 8 9 10



problem link -->https://practice.geeksforgeeks.org/problems/selection-sort/1


//

Space Complexity --> O(1)

Time Complexity --> Best case--> O(N^2) Worst case-->  O(N^2)

STABLE SORTING



//CODE

void selectionSort(int arr[], int n)
{
   
      int mini = 0;
       for(int i = 0; i<n-1; i++){
           mini = i;
           for(int j = i; j<n; j++){
               if(arr[j] < arr[mini]){
                   mini = j;
               }
           }
 		swap(arr[mini],arr[i]);

       }
