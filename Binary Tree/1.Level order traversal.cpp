/*
Question-
Given a binary tree, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.


Example 1:

Input:
    1
  /   \ 
 3     2
Output:1 3 2
Example 2:

Input:
        10
     /      \
    20       30
  /   \
 40   60
Output:10 20 30 40 60


problem link --> https://practice.geeksforgeeks.org/problems/level-order-traversal/1
*/


//CODE

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)


 vector<int> levelOrder(Node* node)
    {
            //level order traversal matlab queue
            queue<Node*>q;vector<int>ans;
            
            if(node==NULL)
            { ans.push_back(-1) ;
            return ans;
            }
            
            //root node queue mein push kardo
            q.push(node);
            
            while(!q.empty())
            {
                Node *temp = q.front();
                q.pop();
                ans.push_back(temp->data);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                 if(temp->right)
                {
                    q.push(temp->right);
                }
                
            }
            return ans;
           
    }


   //OR

    Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []




//CODE


vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL)return {};
        vector<vector<int>> ans;
        vector<int> v;
        int n;
        queue<TreeNode*> q;
        TreeNode* p;
        q.push(root);
        while(!q.empty()){
            n = q.size();
            v.clear();
            while(n--){
                p = q.front();
                q.pop();
                v.push_back(p->val);
                if(p->left){
                    q.push(p->left);
                }if(p->right){
                    q.push(p->right);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
