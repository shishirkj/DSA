Given the root of a binary tree, flatten the tree into a "linked list":

The "linked list" should use the same Node class where the right child pointer points to the next   node in the list and the left child pointer is always null.
The "linked list" should be in the same order as a pre-order traversal of the binary tree.
Example 1:

Input : 
          1
        /   \
       2     5
      / \     \
     3   4     6
Output :
1 2 3 4 5 6 
Explanation: 
After flattening, the tree looks 
like this
    1
     \
      2
       \
        3
         \
          4
           \
            5
             \
              6 
Here, left of each node points 
to NULL and right contains the 
next node in preorder.The inorder 
traversal of this flattened tree 
is 1 2 3 4 5 6.
Example 2:

Input :
        1
       / \
      3   4
         /
        2
         \
          5 
Output : 
1 3 4 2 5  
Explanation : 
After flattening, the tree looks 
like this 
     1
      \
       3
        \
         4
          \
           2
            \ 
             5 
Here, left of each node points 
to NULL and right contains the 
next node in preorder.The inorder 
traversal of this flattened tree 
is 1 3 4 2 5.



problem link --> https://leetcode.com/problems/flatten-binary-tree-to-linked-list/submissions/946116696/





    //APP2 BETTER

   // T.C-->  O(nlogn)   S.C--> O(N)


     void flatten(TreeNode* root) {
    while (root) {
        if (root->left) {
            // Find the rightmost node of the left subtree
            TreeNode* rightmost = root->left;
            while (rightmost->right) {
                rightmost = rightmost->right;
            }
            // Make the right child of the rightmost node point to the root's right subtree
            rightmost->right = root->right;
            // Make the left child of the root NULL
            root->right = root->left;
            root->left = NULL;
        }
        // Update the root to its right child
        root = root->right;
    }








//approach 1     T.C-->O(N)  S.C-->O(N)
  void inorder(Node *root,vector<int>&ans)
    { 
        if(root==NULL){return ;}
        
        inorder(root->left,ans);
        ans.push_back(root->key);
        inorder(root->right,ans);
        
    }
    void flatten(Node *root)
    {
        //step 1
        vector<int>ans;
        //stored inorder --> sorted values 
        inorder(root,ans);
        
        
        Node *head = new Node(ans[0]);
        
        Node *curr = head;
        
        //step 2
        for(int i=1;i<ans.size();i++)
        
        { 
            Node *temp = new Node(ans[i]);
            curr->right = temp;
            curr->left = NULL;
            curr = temp;
        }
        
        //step 3 (last value left and right NULL)
        
        curr->left = nullptr;
        curr->right = nullptr;
        
        
      
        
    }
