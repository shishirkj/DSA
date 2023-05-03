k-th smallest element in BST

Given a BST and an integer K. Find the Kth Smallest element in the BST using O(1) extra space. 

Example 1:

Input:
      2
    /   \
   1     3
K = 2
Output: 2
Explanation: 2 is the 2nd smallest element in the BST

Example 2:

Input:
        2
      /  \
     1    3
K = 5
Output: -1
Explanation: There is no 5th smallest element in the BST as the size of BST is 3


problem link --> https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1



T.c-->O(N)   S.C--> O(N)

vector<int>traverseInorder(Node* root,vector<int>&inorder)
    { 
                if(root==NULL){return inorder;}
        traverseInorder(root->left,inorder);
        inorder.push_back(root->data);
        traverseInorder(root->right,inorder);
            return inorder;        
     }
       int traverse(Node* &root,vector<int>&ans,int k)
        { 
            if(k>ans.size()){return -1;}
            int i=0;
            while(--k)
            { 
                i++;
            }
            return ans[i];
            
        }
    int KthSmallestElement(Node *root, int K) {
       
          vector<int>inorder;
      vector<int>ans = traverseInorder(root,inorder);
        return traverse(root,ans,K);
        
    }