Delete a node from BSTGiven a Binary Search Tree and a node value X. Delete the node with the given value X from the BST. If no node with value x exists, then do not make any change. 

Example 1:

Input:
      2
    /   \
   1     3
X = 12
Output: 1 2 3
Explanation: In the given input there
is no node with value 12 , so the tree
will remain same.
Example 2:

Input:
            1
             \
              2
                \
                 8 
               /    \
              5      11
            /  \    /  \
           4    7  9   12
X = 9
Output: 1 2 4 5 7 8 11 12
Explanation: In the given input tree after
deleting 9 will be
             1
              \
               2
                 \
                  8
                 /   \
                5     11
               /  \     \
              4    7     12




              Expected Time Complexity: O(Height of the BST).
Expected Auxiliary Space: O(Height of the BST).


//problem link --> https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1





//CODE
int minvalue(Node *root)
{ 
   
    Node *curr  = root;
    while(curr->left)
    { 
        curr=  curr->left;
    }
    return curr->data;
    
}

Node *deleteNode(Node *root, int X) {
   // step1: Reach the node
   // step2 : Delete the node (check 3 conditions)
   
   //base case
    if(root==NULL){return NULL;}
    
    if(root->data==X)
    { 
        
        // 0 child
        if(root->right==NULL && root->left==NULL)
        { 
            delete(root);
            return NULL;
        } 
        // 1 child
        
        // left child
        if(root->left!=NULL && root->right==NULL)
        { 
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        if(root->right!=NULL && root->left==NULL)
        { 
            Node* temp = root->right;
              delete(root);
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL)
        { 
            int mini = minvalue(root->right);
            root->data = mini;
            root->right = deleteNode(root->right,mini);
            return root;
        }
        
    }
    
    else if (root->data<X)
    {
         root->right = deleteNode(root->right,X);
        return root;
    }
    else{
        root->left = deleteNode(root->left,X);
        return root;
    }
   
}
