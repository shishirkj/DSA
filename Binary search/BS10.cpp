/*

QUESTION -
Ceiling in a sorted array

Given a sorted array and a value x, the ceiling of x is the smallest element in an array
greater than or equal to x, and the floor is the greatest element smaller than or equal to x. Assume that
the array is sorted in non-decreasing order. Write efficient functions to find the floor and ceiling of x. 


Examples : 

For example, let the input array be {1, 2, 8, 10, 10, 12, 19}
For x = 0:    floor doesn't exist in array,  ceil  = 1
For x = 1:    floor  = 1,  ceil  = 1
For x = 5:    floor  = 2,  ceil  = 8
For x = 20:   floor  = 19,  ceil doesn't exist in array


PROBLEM LINK --> https://www.geeksforgeeks.org/ceiling-in-a-sorted-array/
*/


//CODE
int ceilSearch(int arr[], int low, int high, int x)
{
    int mid;
    if (x <= arr[low])
        return low;
    if (x > arr[high])
        return -1;
    mid = (low + high) / 2; //INTEGER OVWRFLOW
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x) {
        if (mid + 1 <= high && x <= arr[mid + 1])
            return mid + 1;
        else
            return ceilSearch(arr, mid + 1, high, x);
    }
    else {
        if (mid - 1 >= low && x > arr[mid - 1])
            return mid;
        else
            return ceilSearch(arr, low, mid - 1, x);
    }
}