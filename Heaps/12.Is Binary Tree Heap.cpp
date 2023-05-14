Given a binary tree. The task is to check whether the given tree follows the max heap property or not.
Note: Properties of a tree to be a max heap - Completeness and Value of node greater than or equal to its child.

Example 1:

Input:
      5
    /  \
   2    3
Output: 1
Explanation: The given tree follows max-heap property since 5,
is root and it is greater than both its children.

Example 2:

Input:
       10
     /   \
    20   30 
  /   \
 40   60
Output: 0

Expected Time Complexity: O(N)
Expected Space Complexity: O(N)

problem link --> https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1




//CODE

int countNode(Node* root)
{ 
    int ans =0;
    if(root==NULL)
    { 
        return 0;
    }
    // root node + left subtree +right subtree
    ans = 1+countNode(root->left)+countNode(root->right);
    return ans;
}
  bool isCBT(Node* root,int total,int index)
{ 
    // 2 base cases
    if(root==NULL)
    { 
        return true;
    }

// equal to beacuse it is zeroth indexing if 1st indexing then only greater than
    if(total<=index)
    { 
        return false;
    }

    bool left = isCBT(root->left,total,2*index+1);
    bool right = isCBT(root->right,total,2*index+2);
    return (left && right);
}

    bool maxHeap(Node* root)
{ 
        //leaf node
        if(root->left==NULL && root->right==NULL)
        { 
            return true;
        }
        // right node null
        else if(root->right==NULL)
        { 
            return root->data>root->left->data;
        }
        else
        { 
            return ((root->data>root->left->data && root->right->data<root->data) && maxHeap(root->left)&&
            maxHeap(root->right));
        }
        
}
    bool isHeap(struct Node* tree) {
        int total = countNode(tree);int index =0;
        if(isCBT(tree,total,index) && maxHeap(tree))
        { 
         return true;   
        }
        else
        {
            return false;
        }
    }