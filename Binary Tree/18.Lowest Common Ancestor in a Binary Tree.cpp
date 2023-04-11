Given a Binary Tree with all unique values and two nodes value, n1 and n2. The task is to find the lowest common ancestor of the given two nodes. We may assume that either both n1 and n2 are present in the tree or none of them are present.

LCA: It is the first common ancestor of both the nodes n1 and n2 from bottom of tree.

Example 1:

Input:
n1 = 2 , n2 = 3  
       1 
      / \ 
     2   3
Output: 1
Explanation:
LCA of 2 and 3 is 1.
Example 2:

Input:
n1 = 3 , n2 = 4
           5    
          /    
         2  
        / \  
       3   4
Output: 2
Explanation:
LCA of 3 and 4 is 2. 

problem link --> https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

Expected Time Complexity:O(N).
Expected Auxiliary Space:O(Height of Tree).

//CODE
  Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root==NULL){return nullptr;}
       
       // agar pehla node hi n1 ya n2 ke barabar hua to return that
       if(root->data==n1 || root->data==n2){return root;}
       
       Node * left = lca(root->left,n1,n2);
        Node * right = lca(root->right,n1,n2);
        
        //4cases
        
        if(left==NULL && right==NULL ){return NULL;}
        
        if(left!=NULL && right==NULL){return left;}
        
        if(left!=NULL && right!=NULL){return root;}
        else{ 
            return right;
        }
        
       
    }