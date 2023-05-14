Problem Statement
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
1
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
10 7 11 1 8 -1 -1 -1 -1 -1 -1 
Sample Output 1:
2 5 6 7 8 10
1 7 8 10 11
Explanation Of Sample Input 1:
Test-Case 1 : 
Converting the BST into min-heap and its pre-order printing would look like: 2 5 6 7 8 10.

Test-Case 2 :
Converting the BST into min-heap and its pre-order printing would look like: 2 5 6 7 8 10.
Sample Input 2:
2
4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
2 1 3 -1 -1 -1 -1
Sample Output 2:
1 2 3 4 5 6 7
1 2 3    




problem link --> https://www.codingninjas.com/codestudio/problems/convert-bst-to-min-heap_920498?leftPanelTab=0






//CODE

void inorder(BinaryTreeNode* root,vector<int>&ans)
{ 
	if(root==NULL){return;}
	inorder(root->left,ans);
	ans.push_back(root->data);
	inorder(root->right,ans);
}

void preTree(BinaryTreeNode* root,vector<int>&ans,int &index)
{ 
				if(root==NULL)
				{
					return;
				}
			if(index>ans.size()-1)
			{ 
				return ;
			}

			root->data = ans[index++];
			preTree(root->left,ans,index);
			preTree(root->right,ans,index);
}

BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	vector<int>ans;

    //convert BST to inorder
	 inorder(root,ans);
	int index =0;
    // creating tree in preorder form 
	 preTree(root,ans,index);
	return root;

}