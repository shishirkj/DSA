Given a Binary Tree. Return true if, for every node X in the tree other than the leaves, its value is equal to the sum of its left subtree's value and its right subtree's value. Else return false.

An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.


Example 1:

Input:
    3
  /   \    
 1     2

Output: 1
Explanation:
The sum of left subtree and right subtree is
1 + 2 = 3, which is the value of the root node.
Therefore,the given binary tree is a sum tree.
Example 2:

Input:

          10
        /    \
      20      30
    /   \ 
   10    10

Output: 0
Explanation:
The given tree is not a sum tree.
For the root node, sum of elements
in left subtree is 40 and sum of elements
in right subtree is 30. Root element = 10
which is not equal to 30+40.



Expected Time Complexity: O(N)
Expected Auxiliary Space: O(Height of the Tree)


problem link --> https://practice.geeksforgeeks.org/problems/sum-tree/1


//CODE

class Solution
{
        pair<int,bool> isSum(Node *root)
    { 
        if(root==NULL)
        {
            pair<int,bool>p = {0,true};
            return p;
        }
        if(root->left==NULL && root->right==NULL)
        {
             pair<int,bool>p = {root->data,true};
            return p;
        }
        pair<int,bool> left = isSum(root->left);
        pair<int,bool>right = isSum(root->right);
        
        bool sum = left.first+right.first==root->data;
        
        pair<int,bool> ans;
        if(sum && left.second && right.second)
        { 
            ans.second = true;
            //ans.first = root->data+left.first+left.second;
        }
        else
        { 
            ans.second = false;
        }
        
        ans.first = root->data+left.first+right.first;
        return ans;
    }
    public:
    bool isSumTree(Node* root)
    {
         return isSum(root).second;
    }