/*
Question-
Given an array arr[ ] of size N having elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

Example 1:

Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
since it doesn't exist, it is -1.
Example 2:

Input: 
N = 5, arr[] [6 8 0 1 3]
Output:
8 -1 1 3 -1
Explanation:
In the array, the next larger element to 
6 is 8, for 8 there is no larger elements 
hence it is -1, for 0 it is 1 , for 1 it 
is 3 and then for 3 there is no larger 
element on right and hence -1.


question link --> https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

//CODE

Brute force
//T.C-->O(N2)  S.C-->O(N)
for(int i=0;i<n-1;i++){ 
    for(int j=0;j<n;j++){ 
        if(a[i]<a[j]){ans.push_back(a[j])}
    }
}

//OPTIMZED
Expected Time Complexity : O(N)
Expected Auxiliary Space : O(N)



  APPROACH:
1. STACK EMPTY  -->   RETURN {-1}

 

2. S.top()> arr[i] --> RETURN S.top()
 

3. if(S.top()<= arr[i]) --> S.pop()
     //condition for s.pop()

       A. Stack empty 

       B.Stack.top() greater than arr[i] 

 

 

 4. REVERSE THE ARRAY


 
 vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>v;
        stack<long long>s;
        for(int i=n-1;i>=0;i--){ 
        //condition 1:
                if(s.size()==0){ 
                    v.push_back(-1);
                }
        //condition2:        
            else if(s.size()>0 && s.top()>arr[i]){ 
                v.push_back(s.top());
                
            }
        //condition3:
            else if(s.top()<=arr[i] && s.size()>0 ) {
                while(s.size()>0 && s.top()<=arr[i]){ 
                    s.pop();
                                                    }
                if(s.size()==0){ 
                    v.push_back(-1);
                }
                else{ 
                    v.push_back(s.top());
                }
                                                    }
                                                    
            s.push(arr[i]);

                                    }
                //reverse the vector
                reverse(v.begin(),v.end());
                return v;
        
    }