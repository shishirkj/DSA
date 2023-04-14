Tree from Postorder and Inorder

dream job!  

Given inorder and postorder traversals of a Binary Tree in the arrays in[] and post[] respectively. The task is to construct the binary tree from these traversals.

 

Example 1:

Input:
N = 8
in[] = 4 8 2 5 1 6 3 7
post[] =8 4 5 2 6 7 3 1
Output: 1 2 4 8 5 3 6 7
Explanation: For the given postorder and
inorder traversal of tree the  resultant
binary tree will be
           1
       /      \
     2         3
   /  \      /  \
  4    5    6    7
   \
     8
 

Example 2:

Input:
N = 5
in[] = 9 5 2 3 4
post[] = 5 9 3 4 2
Output: 2 9 5 4 3
Explanation:  
the  resultant binary tree will be
           2
        /     \
       9       4
        \     /
         5   3
 

 Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N)


problem link --> https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

//CODE

Node* makeTree(int in[], int post[], int is, int ie, int ps, int pe){
    if(is > ie){
        return NULL;
    }
    Node* root = new Node(post[pe]);
    int nodeIndex = -1;
    for(int i = is; i <= ie; i++){
        if(in[i] == root->data){
            nodeIndex = i;
            break;
        }
    }
    int nodesLeft = nodeIndex - is;
    root->left = makeTree(in, post, is, nodeIndex - 1, ps, ps + nodesLeft - 1);
    root->right = makeTree(in, post, nodeIndex + 1, ie, ps + nodesLeft, pe - 1);
    return root;
}

Node *buildTree(int in[], int post[], int n) {
    return makeTree(in, post, 0, n - 1, 0, n - 1);
}