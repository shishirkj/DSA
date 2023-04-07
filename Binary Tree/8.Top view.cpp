
//TOP VIEW OF TREE

Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree

       1
    /     \
   2       3
  /  \    /   \
4    5  6   7

Top view will be: 4 2 1 3 7
Note: Return nodes from leftmost node to rightmost node. Also if 2 nodes are outside the shadow of the tree and are at same position then consider the extreme ones only(i.e. leftmost and rightmost). 
For ex - 1 2 3 N 4 5 N 6 N 7 N 8 N 9 N N N N N will give 8 2 1 3 as answer. Here 8 and 9 are on the same position but 9 will get shadowed.


Example 1:

Input:
      1
   /    \
  2      3

Output: 2 1 3

Example 2:

Input:
       10
    /      \
  20        30
 /   \    /    \
40   60  90    100

Output: 40 20 10 30 100

problem link --> https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N). //from left to right in Binary Tree.



//code
    vector<int> topView(Node *root)
    {
            vector<int>ans;
            map<int,int>umap;
            queue<pair<Node*,int>>q;
            
            q.push({root,0});
            
            while(!q.empty())
            { 
                auto temp = q.front();
                q.pop();
                int hd = temp.second;
                Node* node = temp.first;
                if(umap.find(hd)==umap.end())
                { 
                    umap[hd]=node->data; 
                }
                if(node->left)
                { 
                    q.push({node->left,hd-1});
                }
                if(node->right)
                { 
                    q.push({node->right,hd+1});
                }
                
            }
            for(auto it : umap)
            { 
                ans.push_back(it.second);
            }
            return ans;
    }

//CODE


