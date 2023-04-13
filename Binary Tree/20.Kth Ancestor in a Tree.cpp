Given a binary tree of size  N, a node, and a positive integer k., Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. If there does not exist any such ancestor then return -1.
Note: It is guaranteed that the node exists in the tree.


Example 1:



Input:
     K = 2
     Node = 4
Output: 1
Explanation:
Since, K is 2 and node is 4, so we
first need to locate the node and
look k times its ancestors.
Here in this Case node 4 has 1 as his
2nd Ancestor aka the Root of the tree.
 

Example 2:

Input:
k=1 
node=3
      1
    /   \
    2     3

Output:
1
Explanation:
K=1 and node=3 ,Kth ancestor of node 3 is 1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


problem link --> https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1



//brute approach

we can do this question by finding the path and storing in a vector
//CODE

Node *solve(Node *&root,int &k,int node)
{ 
    if(root==NULL){return NULL;}
    
    //1st example dekhe to 4 mil gaya ab upar jao us number ko leke
    if(root->data==node)
    { 
        return root;
    }
    Node* left = solve(root->left,k,node);
     Node* right = solve(root->right,k,node);
     
     //wapas jaate jaate condition check karlo
     if(left!=NULL && right==NULL)
     { 
         k--;
         if(k==0)
         { 
             return root;
         }
         return left;
     }
     
          if(right!=NULL && left==NULL)
     { 
         k--;
         if(k==0)
         { 
             return root;
         }
         return right;
     }
     return NULL;
}
int kthAncestor(Node *root, int k, int node)
{
    Node* ans = solve(root,k,node);
    if(ans==NULL || ans->data==node)
    { 
        return -1;
    }
    return ans->data;
    
}