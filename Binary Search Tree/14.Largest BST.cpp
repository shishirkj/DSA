Given a binary tree. Find the size of its largest subtree that is a Binary Search Tree.
Note: Here Size is equal to the number of nodes in the subtree.

Example 1:

Input:
        1
      /   \
     4     4
   /   \
  6     8
Output: 1
Explanation: There's no sub-tree with size
greater than 1 which forms a BST. All the
leaf Nodes are the BSTs with size equal
to 1.
Example 2:

Input: 6 6 3 N 2 9 3 N 8 8 2
            6
        /       \
       6         3
        \      /   \
         2    9     3
          \  /  \
          8 8    2 
Output: 2
Explanation: The following sub-tree is a
BST of size 2: 
       2
    /    \ 
   N      8
Your Task:
You dont need to read input or print anything. Your task is to complete the function largestBst() that takes the root node of the Binary Tree as its input and returns the size of the largest subtree which is also the BST. If the complete Binary Tree is a BST, return the size of the complete Binary Tree. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).





//CODE

class Solution{
    public:
    
    
    class info
    { 
        public:
        
        int maxi;
        int mini;
        bool isBST;
        int size;
    };
    
    
    info solve(Node* root,int &ans)
    { 
        if(root==NULL)
        { 
            return {INT_MIN,INT_MAX,true,0};
        }
        
        info left = solve(root->left,ans);
        info right = solve(root->right,ans);
        
        info currNode;
            
            currNode.size = left.size+right.size+1;
            currNode.maxi = max(right.maxi,root->data);
            currNode.mini = min(left.mini,root->data);
            
            if(left.isBST && right.isBST && root->data>left.maxi && root->data<right.mini)
            { 
                 currNode.isBST= true;
            }
            else
            { 
                 currNode.isBST= false;
            }
            
            //answer update
            if(currNode.isBST)
            { 
                ans = max(currNode.size,ans);
            }
            return currNode;
            
    }
    
    int largestBst(Node *root)
    {
    	int ans = 0;
    	
    	info temp =solve( root, ans);
    	return ans;
    }
};





