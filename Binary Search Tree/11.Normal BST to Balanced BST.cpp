Given a Binary Search Tree, modify the given BST such that it is balanced and has minimum possible height.

Examples :

Input:
       30
      /
     20
    /
   10
Output:
     20
   /   \
 10     30

Input:
         4
        /
       3
      /
     2
    /
   1
Output:
      3            3           2
    /  \         /  \        /  \
   1    4   OR  2    4  OR  1    3   OR ..
    \          /                   \
     2        1                     4 



Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)




question link --> https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1




//CODE
void inorder(Node *root,vector<int>&ans)
    { 
        if(root==NULL){return ;}
        
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
        
    }
    
    
    Node * UnbalancedtoNormal(int start,int end,vector<int>&ans)
    { 
         //step 2--> find mid and and make node for it and rest recursion
        if(start>end)
        return NULL;
        
        int mid = (start+end)/2;
        
        Node *head = new Node(mid);
        
        head->left =  UnbalancedtoNormal(start,mid-1,ans);
        head->right =   UnbalancedtoNormal(mid+1,end,ans);
        return head;
    }
    
    
Node* buildBalancedTree(Node* root)
{
//step 1
        vector<int>ans;
        //stored inorder --> sorted values 
        inorder(root,ans);
        
        
       // step 3--> return ans
            return  UnbalancedtoNormal(0,ans.size()-1,ans);
        
}