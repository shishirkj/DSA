
Max and min element in Binary TreeGiven a Binary Tree, find maximum and minimum elements in it.

Example 1:

Input: 
           
Output: 11 1
Explanation:                           
 The maximum and minimum element in 
this binary tree is 11 and 1 respectively.
Example 2:

Input: 
           6
        / \
       5   8
      /
     2
Output: 8 2


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


 int findMax(Node *root)
    {
      Node *temp = root;
      while(temp->right!=NULL)
      { 
          temp= temp->right;
         
      }
       return temp->data;
    }
    int findMin(Node *root)
    {
          Node *temp = root;
      while(temp->left!=NULL)
      { 
          temp= temp->left;
         
      }
       return temp->data;
    }
