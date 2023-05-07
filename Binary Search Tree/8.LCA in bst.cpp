Lowest Common Ancestor in a BST


Given a Binary Search Tree (with all values unique) and two node values. Find the Lowest Common Ancestors of the two nodes in the BST.

Example 1:

Input:
              5
            /   \
          4      6
         /        \
        3          7
                    \
                     8
n1 = 7, n2 = 8
Output: 7
Example 2:

Input:
     2
   /   \
  1     3
n1 = 1, n2 = 3
Output: 2


problem link --> https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1



//brute force
//CODE    t.c-->O(N)     s.c-->O(H)

  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){return NULL;}

        if(root->val>p->val && root->val>q->val)
        {
   return lowestCommonAncestor(root->left,  p,  q) ;

        }
           else if(root->val<p->val && root->val<q->val)
        {
    return lowestCommonAncestor(root->right,  p,  q) ;

        }
      
        return root;


//better approach

//code t.c--> O(Height)     s.c-->O(H)


Node* LCA(Node *root, int n1, int n2)
{
    
    while(root!=NULL)
    { 
        if(root->data<n1 && root->data<n2)
        { 
            root = root->right;
        }
        else if(root->data>n1 && root->data>n2)
        { 
            root = root->left;
        }
        else
        { 
            return root;
        }
    }
    return root;
}