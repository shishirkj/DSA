/*
Question-
Maximum Rectangular Area in a Histogram
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width is 1 unit, there will be N bars height of each bar will be given by the array arr.

Example 1:

Input:
N = 7
arr[] = {6,2,5,4,5,1,6}
Output: 12
Explanation: 


Example 2:

Input:
N = 8
arr[] = {7 2 8 9 1 3 6 5}
Output: 16
Explanation: Maximum size of the histogram 
will be 8  and there will be 2 consecutive 
histogram. And hence the area of the 
histogram will be 8x2 = 16.

question link --> https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1
*/






//BRUTE FORCE
        T.C+S.C = O(N^2) + O(1)
long long getMaxAreaBFS(long long arr[], int n)
    {
        // Your code here
        long long area = 0;
        for(int i=0; i<n; ++i) {
            long long temp = INT_MAX;
            for(int j=i; j<n; ++j) {
                temp = min( temp, arr[j] );
                area = max( area, temp * (j + 1 - i) );
            }
        }
        return area;
    }
//CODE

Expected Time Complxity : O(N)
Expected Auxilliary Space : O(N)
class Solution
{
    
    private:
    // Next smallest element
    vector<long long> left(long long arr[], int n){ 
      stack<long long>s; vector<long long>v(n);
        s.push(-1);
            for(int i=0;i<n;i++){
            while(s.top()!=-1 && arr[s.top()]>=arr[i]){ 
                s.pop();
            }
            v[i] = s.top();
            s.push(i);
              
            }
            return v;   
    }
    
    
    vector<long long> right(long long arr[], int n){ 
      stack<long long>s; vector<long long>v(n);
        s.push(-1);
            for(int i=n-1;i>=0;i--){
            while(s.top()!=-1 && arr[s.top()]>=arr[i]){ 
                s.pop();
            }
            v[i] = s.top();
            s.push(i);
       
            }
             
            return v;   
    }
    
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        

       //step 1: find next and prev
            
            vector<long long>  prev(n);
            prev= left(arr,n);
            vector<long long> next(n);
            next =right(arr,n);
            
            
       //step 2: find area
               long long area = INT_MIN;
               
       for(int i =0 ;i<n;i++){ 
           
            long long length = arr[i];
            // remember width formula = n-p-1
            
            /*
            for next[i] =-1
            
            Example = {2,2,2,2,2} then next would be -1 after the formula
            in width we will get negative area and SEGGY
            */
            if(next[i]== -1){ 
                next[i] = n;
            }
            long long width = next[i]-prev[i]-1;
            
          long long New_Area = length*width;
          
                area = max(area,New_Area);
       }
       
       //step 3:return the maximum area
       
       return area;
       
    }
};



