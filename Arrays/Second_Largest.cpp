/*
Question-Second Largest

Given an array Arr of size N, print second largest distinct element from an array.

Example 1:

Input: 
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the 
array is 35 and the second largest element
is 34.
Example 2:

Input: 
N = 3
Arr[] = {10, 5, 10}
Output: 5
Explanation: The largest element of 
the array is 10 and the second 
largest element is 5.


question link --> https://practice.geeksforgeeks.org/problems/second-largest3735/1


*/



//CODE
int print2largest(int arr[], int n) {
	    int largest=arr[0];

     int secondlargest=-1;

    for(int i=1;i<n;i++){

        if(arr[i]>largest){ 
            secondlargest=largest;
            largest=arr[i];
        }

        else if(arr[i]<largest && arr[i]>secondlargest){

            secondlargest=arr[i];

        }

    }

    return secondlargest;
	}