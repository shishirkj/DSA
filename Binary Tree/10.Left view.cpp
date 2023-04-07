Left View of Binary Tree

Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument.

Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8   

Example 1:

Input:
   1
 /  \
3    2
Output: 1 3

Example 2:

Input:

Output: 10 20 40


problem link --> https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1


//CODE
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).


void solve(Node *root,vector<int>&ans,int level)
{ 
    if(root==NULL){return ;}
    if(ans.size()==level)
    { 
        ans.push_back(root->data);
    }
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
    
}
vector<int> leftView(Node *root)
{
   vector<int>ans;
   solve(root,ans,0);
   return ans;
}