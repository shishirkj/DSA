







Question
Bubble Sort

Given an Integer N and a list arr. Sort the array using bubble sort algorithm.
Example 1:

Input: 
N = 5
arr[] = {4, 1, 3, 9, 7}
Output: 
1 3 4 7 9
Example 2:

Input:
N = 10 
arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
Output: 
1 2 3 4 5 6 7 8 9 10

Worst T.C--> O(n^2)
Best T.C --> O(N)

STABLE 



link --> https://practice.geeksforgeeks.org/problems/bubble-sort/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
//CODE

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        for(int i=0;i<n;i++)
        { 
            for(int j=0;j<n-i-1;j++)
            { 
                if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
            }
        }
    }
};