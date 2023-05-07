Given a binary tree, find if it is height balanced or not. 
A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 

A height balanced tree
        1
     /     \
   10      39
  /
5

An unbalanced tree
        1
     /    
   10   
  /
5

Example 1:

Input:
      1
    /
   2
    \
     3 
Output: 0
Explanation: The max difference in height
of left subtree and right subtree is 2,
which is greater than 1. Hence unbalanced
Example 2:

Input:
       10
     /   \
    20   30 
  /   \
 40   60
Output: 1
Explanation: The max difference in height
of left subtree and right subtree is 1.
Hence balanced. 



problem link --> https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1



//CODE

Expected time complexity: O(N)
Expected auxiliary space: O(h) , where h = height of tree


    pair<bool,int> checkbalance(Node *root)
    { 
        if(root==NULL)
        { 
            pair<bool,int>p = {true,0};
            return p;
        }
        
        pair<bool,int> left = checkbalance(root->left);
        pair<bool,int>right =  checkbalance(root->right);
        
        bool diff = (abs(left.second-right.second))<=1;
         pair<bool,int>ans;
         
        if(diff && left.first && right.first)
        { 
            ans.first = true;
        }
        else{ans.first = false; }
        //height
         ans.second = max(left.second, right.second) + 1; 
        return ans;
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return checkbalance(root).first;
    }