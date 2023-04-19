Search a node in BST

Given a Binary Search Tree and a node value X, find if the node with value X is present in the BST or not.


Example 1:

Input:         2
                \
                 81 
               /    \ 
             42      87 
              \       \ 
               66      90 
              / 
            45
X = 87
Output: 1
Explanation: As 87 is present in the
given nodes , so the output will be
1.
Example 2:

Input:      6
             \ 
              8 
             / \ 
            7   9
X = 11
Output: 0
Explanation: As 11 is not present in 
the given nodes , so the output will
be 0.


problem link --> https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1




//ITERATIVE METHOD(OPTIMIZED)
bool search(Node* root, int x) {
    Node *temp = root;
    
    
    //T.C--> // T.C--> O(H) || Olog(N)
    
    //S.C--> O(1)
    
    while(temp!=NULL)
    { 
        if(temp->data==x)
        {
            return true;
        }
        if(temp->data>x)
        { 
            temp= temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
}



//RECURSIVE(BRUTE)
bool search(Node* root, int x) {
    //base case
    if(root==NULL)
    { 
        return false;
    }
    
    // T.C--> O(H) || Olog(N)
    // S.C--> O(N)
     if(root->data==x)
    { 
        //if element found return true
        return true;
    }
        
        if(root->data>x)
        //left part jao if root is greater than key
        search(root->left,x);
        else
        // right part
        search(root->right,x);
}