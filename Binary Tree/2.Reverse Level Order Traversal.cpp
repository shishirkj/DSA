/*

Question-

Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.

Example 1:

Input :
        1
      /   \
     3     2

Output: 3 2 1
Explanation:
Traversing level 1 : 3 2
Traversing level 0 : 1
Example 2:

Input :
       10
      /  \
     20   30
    / \ 
   40  60

Output: 40 60 20 30 10
Explanation:
Traversing level 2 : 40 60
Traversing level 1 : 20 30
Traversing level 0 : 10


problem link --> https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1

*/



//CODE  (USING STACK)

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


vector<int> reverseLevelOrder(Node *root)
{
    // reverse karne ke liye bola hai to stack
    
    // level order traversal to queue
            
           stack<int>s
           queue<Node*;vector<int>ans;
            
                    if(root==NULL) return {};
                    
                    q.push(root);
                  
                    while(!q.empty())
                    {
                        Node *temp = q.front();
                        q.pop();
                            s.push(temp->data);
                            if(temp->right)
                            {
                                q.push(temp->right);
                            }
                            if(temp->left)
                            {
                                q.push(temp->left);
                            }
                    }
                    
                    
                    while(!s.empty())
                    {
                        ans.push_back(s.top());
                        s.pop();
                    }
                    
                    return ans;
}



//WITHOUT STACK


Given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. (i.e., from left to right, level by level from leaf to root).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[15,7],[9,20],[3]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []




 vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector <vector<int>> levelorder; 
        if (root == NULL)
            return levelorder;
        queue <TreeNode* > q;
        q.push(root);
        while (!q.empty()) {
            vector <int> level;
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);
                if (curr->left != NULL)
                    q.push(curr->left);
                if (curr->right != NULL)
                    q.push(curr->right);    
            }
            levelorder.push_back(level);
        } 
        reverse (levelorder.begin(), levelorder.end());
        return levelorder;
        
    }