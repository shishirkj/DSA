/*
Question-
Given a Binary Tree, find the In-Order Traversal of it.

Example 1:

Input:
       1
     /  \
    3    2
Output: 3 1 2

Example 2:

Input:
        10
     /      \ 
    20       30 
  /    \    /
 40    60  50
Output: 40 20 60 10 50 30

problem link --> https://practice.geeksforgeeks.org/problems/inorder-traversal/1
*/

//CODE

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    
 vector<int>v;
 
    vector<int> inOrder(Node* root) {
        
        if(root!=NULL){

            inOrder(root->left);

            v.push_back(root->data);

            inOrder(root->right);

        }

        return v;

 }
};