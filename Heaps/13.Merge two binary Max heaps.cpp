Given two binary max heaps as arrays, merge the given heaps to form a new max heap.

 

Example 1:

Input  : 
n = 4 m = 3
a[] = {10, 5, 6, 2}, 
b[] = {12, 7, 9}
Output : 
{12, 10, 9, 2, 5, 7, 6}
Explanation :




 Expected Time Complexity: O(n.Logn)
Expected Auxiliary Space: O(n + m)





//CODE

class Solution{
    public:
vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
    priority_queue<int> q1;
    vector<int> ans(n+m);
    int index = 0;
    
    for(int i = 0; i < n; i++) { 
        q1.push(a[i]);
    }
       
    for(int i = 0; i < m; i++) { 
        q1.push(b[i]);
    }
       
    while(!q1.empty()) { 
        ans[index] = q1.top();
        q1.pop();
        index++;
    }
    
    
    return ans;
}
};



//BETTER APPROACH

merge two arrays and appy heapify
T.C--> O(N)

S.C--> O(N)