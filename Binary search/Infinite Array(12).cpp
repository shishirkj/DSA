/*
QUESTION -
Find position of an element in a sorted array of infinite numbers

Suppose you have a sorted array of infinite numbers, how would you search an element in the array?


Example-

arr[] = {1,2,3,4,5,6 --------------------infinite}  [ End bound unknown]
element to be found  -> 52

// ARTICLE LINK --> https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/

*/




//LOGIC

int low = 0;
int high = 1;
while(key>arr[high]){
    low = high;
    high = high *2; // increasing the search space twice if element not found;
}
//LATER SIMPLE BINARY SEARCH

BS(arr[],high,low)
