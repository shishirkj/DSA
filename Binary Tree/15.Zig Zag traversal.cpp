Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

 Example 1:

Input:
        1
      /   \
     2     3
    / \   /  \
   4   5 6    7
Output:
1 3 2 4 5 6 7
Example 2:

Input:
           7
        /     \
       9       7
     /  \     /   
    8    8   6     
   /  \
  10   9 
Output:
7 7 9 8 8 6 9 10 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[20,9],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []

problem link --> https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).




//CODE
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> res;
    if (!root) {
        return res;
    }
    queue<TreeNode*> q;
    q.push(root);
    bool isLeftToRight = true;
    while (!q.empty()) 
    {
        int levelSize = q.size();
        vector<int> levelNodes(levelSize);
        for (int i = 0; i < levelSize; i++) 
        {
            TreeNode* node = q.front();
            q.pop();
            int index = isLeftToRight ? i : levelSize -i - 1;
            levelNodes[index] = node->val;
            if (node->left)
             {
                q.push(node->left);
            }
            if (node->right) 
            {
                q.push(node->right);
            }
        }
        res.push_back(levelNodes);
        isLeftToRight = !isLeftToRight;
    }
    return res;
}
