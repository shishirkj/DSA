
Question-
Sum of the Longest Bloodline of a Tree (Sum of nodes on the longest path from root to leaf node)


Given a binary tree of size N. Your task is to complete the function sumOfLongRootToLeafPath(), that find the sum of all nodes on the longest path from root to leaf node.
If two or more paths compete for the longest path, then the path having maximum sum of nodes is being considered.

Example 1:

Input: 
        4        
       / \       
      2   5      
     / \ / \     
    7  1 2  3    
      /
     6
Output: 13
Explanation:
        4        
       / \       
      2   5      
     / \ / \     
    7  1 2  3 
      /
     6

The highlighted nodes (4, 2, 1, 6) above are 
part of the longest root to leaf path having
sum = (4 + 2 + 1 + 6) = 13
Example 2:

Input: 
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
Output: 11

problem link --> https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

//CODE
class Solution
{
    void solve(Node *root,int len,int &maxlen,int sum,int &maxsum)
    { 
        if(root==NULL)
        { 
            if(len>maxlen)
            {   
                maxlen = len;
                maxsum = sum;
            }
            if(maxlen ==len)
            { 
                maxsum = max(sum,maxsum);
            }
            return;
        }
        
        sum = sum+root->data;
        solve(root->left,len+1,maxlen,sum,maxsum);
        solve(root->right,len+1,maxlen,sum,maxsum);
        
    }
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
       int len =0;int maxlen =0,sum=0,maxsum= INT_MIN;
       
            solve(root,len,maxlen,sum,maxsum);
            return maxsum;
    }
};

