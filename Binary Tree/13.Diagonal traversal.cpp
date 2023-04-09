Diagonal Traversal of Binary Tree

Given a Binary Tree, print the diagonal traversal of the binary tree.

Consider lines of slope -1 passing between nodes. Given a Binary Tree, print all diagonal elements in a binary tree belonging to same line.
If the diagonal element are present in two different subtress then left subtree diagonal element should be taken first and then right subtree. 

Example 1:

Input :
            8
         /     \
        3      10
      /   \      \
     1     6     14
         /   \   /
        4     7 13
Output : 8 10 14 3 6 7 13 1 4
Explanation:
unnamed
Diagonal Traversal of binary tree : 
 8 10 14 3 6 7 13 1 4


 problem link --> https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
Here N is number of nodes.


 //Code

vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   if(root==NULL)
   {
       return ans;
   }
   
   queue<Node*>q;
   
   q.push(root);
   
   while(!q.empty())
   {
       Node* temp=q.front();
       q.pop();
       
       ans.push_back(temp->data);
       if(temp->left)
       {
           q.push(temp->left);
       }
       
       while(temp->right!=NULL)
       {
           temp=temp->right;
           ans.push_back(temp->data);
           if(temp->left)
           {
               q.push(temp->left);
           }
       }
       
   }
   return ans;
}
