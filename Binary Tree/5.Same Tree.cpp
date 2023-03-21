/*
Question-
Given two binary trees, the task is to find if both of them are identical or not. 


Example 2:

Input:
     1          1
   /   \      /   \
  2     3    2     3
Output: Yes
Explanation: There are two trees both
having 3 nodes and 2 edges, both trees
are identical having the root as 1,
left child of 1 is 2 and right child
of 1 is 3.
Example 2:

Input:
    1       1
  /  \     /  \
 2    3   3    2
Output: No
Explanation: There are two trees both
having 3 nodes and 2 edges, but both
trees are not identical.

Your task:
Since this is a functional problem you don't have to worry about input, you just have to complete the function isIdentical() that takes two roots as parameters and returns true or false. The printing is done by the driver code.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).


problem link --> https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
*/


//Code

// RECURSIVE
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //base case

        if(r1==NULL && r2==NULL)  {return true;}

       
        if(r1==NULL || r2==NULL) {return false;}

        return (r1->data== r2->data && isIdentical(r1->left,r2->left)
        && isIdentical(r1->right,r2->right));
    }
};


//ITERATIVE INORDER PREORDER

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
  void inorder(vector<int>&inp,TreeNode*root)
  {
      if(root!=NULL)
      {
        inorder(inp,root->left);
        inp.push_back(root->val);
        inorder(inp,root->right);
      }
  }
  void preorder(vector<int>&prep,TreeNode*root)
  {
      if(root!=NULL)
      {
        prep.push_back(root->val);
       preorder(prep,root->left);
        preorder(prep,root->right);
      }
      else{
        prep.push_back(1e5);
      }
  }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>inp,inq;
        vector<int>prep,preq;

        inorder(inp,p);
        inorder(inq,q);

        preorder(prep,p);
        preorder(preq,q);

        if(inp==inq && prep == preq)
        {
          return true;
        }
        return false;
    }
};