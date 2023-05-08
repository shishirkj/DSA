Construct Binary Search Tree from Preorder Traversal

Given an array of integers preorder, which represents the preorder traversal of a BST (i.e., binary search tree), construct the tree and return its root.

It is guaranteed that there is always possible to find a binary search tree with the given requirements for the given test cases.

A binary search tree is a binary tree where for every node, any descendant of Node.left has a value strictly less than Node.val, and any descendant of Node.right has a value strictly greater than Node.val.

A preorder traversal of a binary tree displays the value of the node first, then traverses Node.left, then traverses Node.right.

 

Example 1:


Input: preorder = [8,5,1,7,10,12]
Output: [8,5,10,1,7,null,12]
Example 2:

Input: preorder = [1,3]
Output: [1,null,3]


problem link --> https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/



//CODE

TIME COMPLEXITY--> O(3N)--> O(N)     SPACE COMPLEXITY-->O(H) worst case skewed O(N)
TreeNode* solve(vector<int>&preorder,int min,int max,int &i)
{ 
    // 2 base cases
    if(i>=preorder.size())
    { 
        return NULL;
    }
        // agar data range mein lie nahi karta
    if(preorder[i]<min || preorder[i]>max)
    { 
        return NULL;
    }

            TreeNode *root  = new TreeNode (preorder[i++]);
            root->left = solve(preorder,min,root->val,i);
            root->right = solve(preorder,root->val,max,i);

            return root;

}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        // using preorder i,e LNR so 1st data is root and then using same logic of valid BST 
        int min = INT_MIN;
        int max = INT_MAX;
            int i =0;
       return  solve(preorder,min,max,i) ;
    }