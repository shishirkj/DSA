Validate Binary Search Tree

Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left 
subtree
 of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1:


Input: root = [2,1,3]
Output: true
Example 2:


Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.
 


 problem link --> https://leetcode.com/problems/validate-binary-search-tree/description/



 //APPROACH 1

 vector<int> isInorder(TreeNode *root,vector<int>&ans)
{ 
    if(root==NULL)
    { 
        return ans;
    }
       isInorder(root->left,ans);
        ans.push_back(root->val);
      isInorder(root->right,ans);
    return ans;
}
bool isSorted(vector<int>&res)
{ 
    for(int i=0;i<res.size()-1;i++)
    { 
        if(res[i]>=res[i+1]){return false;}
    }
    return true;
}
    bool isValidBST(TreeNode* root) {

        //As we know that inorder BST is sorted
            vector<int>ans;
            // converted in vector
         vector<int>res =  isInorder(root,ans);
//checking if sorted
            if(isSorted(res)){return true;}
            return false;
    }



    //BETTER APPROACH T.C-->O(N) S.C-->O(H)

        public:
    bool isvalid(Node *root,int min,int max)
    { 
        if(root==NULL){return true;}
        if(root->data>min && root->data<max)
        { 
            bool left = isvalid(root->left,min,root->data);
            bool right = isvalid(root->right,root->data,max);
            return left && right;
        }
        return false;
    }
    bool isBST(Node* root) 
    {
        int min = INT_MIN;int max = INT_MAX;
        return isvalid(root,min,max);
    }
};