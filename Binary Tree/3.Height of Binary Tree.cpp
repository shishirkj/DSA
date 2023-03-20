/*
Question-

Height of Binary Tree
Given a binary tree, find its height.


Example 1:

Input:
     1
    /  \
   2    3
Output: 2
Example 2:

Input:
  2
   \
    1
   /
 3
Output: 3   

question link --> https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
*/

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N) or O(height) --> Recursive stack
//CODE
  int height(struct Node* node){
       //recursion h1(left sub tree) ka height de dega
       
       // same for h2(left sub tree)
       
       //base condition
       if(node==NULL)
       {
           return 0;
       }
       
         int left = height(node ->left);
        int right = height(node->right);
       
         int ans = max(left, right) + 1;
       
       
       return ans;
    }