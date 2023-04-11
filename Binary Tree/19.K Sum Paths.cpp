K Sum Paths

Given a binary tree and an integer K. Find the number of paths in the tree which have their sum equal to K.
A path may start from any node and end at any node in the downward direction.


Example 1:

Input:      
Tree = 
          1                               
        /   \                          
       2     3
K = 3
Output: 2
Explanation:
Path 1 : 1 + 2 = 3
Path 2 : only leaf node 3
Example 2:

Input: 
Tree = 
           1
        /     \
      3        -1
    /   \     /   \
   2     1   4     5                        
        /   / \     \                    
       1   1   2     6    
K = 5                    
Output: 8
Explanation:
The following paths sum to K.  
3 2 
3 1 1 
1 3 1 
4 1 
1 -1 4 1 
-1 4 2 
5 
1 -1 5 

Expected Time Complexity: O(N*Height)
Expected Auxiliary Space: O(Height of Tree)

problem link --> https://practice.geeksforgeeks.org/problems/k-sum-paths/1

//CODE
class Solution{
  public:
    void solve(Node* root, int k, int &count, vector<int> path) {
        //base case
        if(root == NULL)
            return ;
        
        path.push_back(root->data);
        
        //left
        solve(root->left, k, count, path);
        //right
        solve(root->right, k, count, path);
        
        //check for K Sum
        
        int size = path.size();
        int sum = 0;
        for(int i = size-1; i>=0; i--)  {
            sum += path[i];
            if(sum == k)
                count++;
        }
        
        path.pop_back();
    }
    int sumK(Node *root,int k)
    {
        vector<int> path;
        int count = 0;
        solve(root, k, count, path);
        return count;
    }
};




    T.C--> O(n) USING MAP UNORDERED

    /CODE
 public:
      unordered_map<int,int>mp;
    void solv(Node*root,int k,int &count, int sum){
        if(root==NULL){
            return;
        }
        
        
        sum=sum+root->data;
        count=count+mp[sum-k];
        if(sum==k) count++;
        mp[sum]++;
        solv(root->left,k,count,sum);
        solv(root->right,k,count,sum);
        mp[sum]--;
        
    }
    
    int sumK(Node *root,int k)
    {
       
        int count=0;
        
        solv(root,k,count,0);
        
        return count;
    }