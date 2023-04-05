Diameter of a Binary Tree


The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes. The diagram below shows two trees each with diameter nine, the leaves that form the ends of the longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes). 



Example 1:

Input:
       1
     /  \
    2    3
Output: 3
Example 2:

Input:
         10
        /   \
      20    30
    /   \ 
   40   60
Output: 4


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).




problem link --> https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1



//CODE
class Solution {
    int solve(Node *root,int &res)
    {
        //base case
        if(root==NULL)
        {
            return 0;
        }
        //hypothesis
        int l = solve(root->left,res);
        int r = solve(root->right,res);
        
        //induction
        int temp = max(l,r)+1;
        int ans = max(temp,1+l+r);
        res = max(res,ans);
        return temp;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
    int res = INT_MIN;
    solve(root,res);
    return res;
    }
};