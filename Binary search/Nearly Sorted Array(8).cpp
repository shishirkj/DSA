/*

QUESTION -
Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e.,
 arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1].
 The task is to search for an element in this array.

EXAMPLE 1 -
Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
Output: 2

EXAMPLE 2 -
Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
Output: -1

PROBLEM LINK --> https://www.geeksforgeeks.org/search-almost-sorted-array/
*/



// LOGIC
int s=0,e = n-1;
while(s<e){
int mid = s+(e-s)/2; //TO AVOID INTEGER OVERFLOW
if(element == a[mid]){
    return mid;
}
if(a[mid-1]==element ){
    return mid-1;
}
else if(a[mid+1]==element){
    return mid+1;
}

}
e = mid-2;
start = mid+2;
