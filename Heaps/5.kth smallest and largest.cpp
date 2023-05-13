Kth smallest element


Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Note :-  l and r denotes the starting and ending index of the array.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
Example 2:

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given 
array is 15.



problem link --> https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1


problem link --> https://leetcode.com/problems/kth-largest-element-in-an-array/solutions/


//brute force
time complexity-->O(nlogn)
space complexity--> o(1)

 // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int a =-1;
        sort(arr,arr+r+1);
    return arr[k-1];
    }




    //BETTER APPROACH

    time complexity--> o(nlogk)
    space complexity--> o(k)
    
        // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
       
       int size = l+r+1;
       
       priority_queue<int>max_heap;
       
       for(int i =0;i<size;i++)
       { 
           max_heap.push(arr[i]);
           
           if(max_heap.size()>k)
           { 
               max_heap.pop();
           }
       }
       return max_heap.top();
    }




    //kth largest

     int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>min_heap;


            for(int i =0;i<nums.size();i++)
            { 
                min_heap.push(nums[i]);
                if(min_heap.size()>k)
                { 
                    min_heap.pop();
                }
            }
            return min_heap.top();
    }