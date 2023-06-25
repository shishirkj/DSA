Question 

Insertion Sort

The task is to complete the insert() function which is used to implement Insertion Sort.


Example 1:

Input:
N = 5
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9
Example 2:

Input:
N = 10
arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
Output:
1 2 3 4 5 6 7 8 9 10



Best T.C--> O(n)

WORST T.C --> O(N^2)

STABLE SORT




//CODE


    void insert(int arr[], int i)
    {
        insertionSort(arr,i);
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //for round since first is already sorted (we assume)
        
        for(int i =1;i<n;i++)
        { 
            int temp =arr[i];
            
            int j =i-1;
            while(j>=0)
            { 
                if(arr[j]>temp)
                { 
                    arr[j+1] = arr[j];
                }
                
                else
                {
                    break;
                }
                
                j--;
            }
            arr[j+1] = temp;
        }