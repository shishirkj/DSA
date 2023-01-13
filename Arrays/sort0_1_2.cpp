/*
Question -

Sort 0 1 2

example -

i/p --> {0,1,2,1,1,0}
o/p --> {0,0,1,1,1,2}

problem link --> https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1
*/


//CODE 


#include <bits/stdc++.h> 
 void sort012(int *arr, int n)
{
   //   Write your code here
           sort(arr,arr+n);
      for(int i=0;i<n-1;i++){
          cout<<arr[i];
      }
}