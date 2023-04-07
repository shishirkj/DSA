Right View of Binary Tree


Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.

Right view of following tree is 1 3 7 8.

          1
       /     \
     2        3
   /   \      /    \
  4     5   6    7
    \
     8

Example 1:

Input:
       1
    /    \
   3      2
Output: 1 2
Example 2:

Input:
     10
    /   \
  20     30
 /   \
40  60 
Output: 10 30 60




Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).


problem link --> https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1




//CODE
 private:
    void solve(Node *root,vector<int>&ans,int level)
{ 
    if(root==NULL){return ;}
    if(ans.size()==level)
    { 
        ans.push_back(root->data);
    }
  
    solve(root->right,ans,level+1);
      solve(root->left,ans,level+1);
    
}
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int>ans;
   solve(root,ans,0);
   return ans;
    }
    