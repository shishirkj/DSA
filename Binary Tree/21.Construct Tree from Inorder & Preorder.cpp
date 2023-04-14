Construct Tree from Inorder & Preorder

dream job!  

Given 2 Arrays of Inorder and preorder traversal. The tree can contain duplicate elements. Construct a tree and print the Postorder traversal. 

Example 1:

Input:
N = 4
inorder[] = {1 6 8 7}
preorder[] = {1 6 7 8}
Output: 8 7 6 1
Example 2:

Input:
N = 6
inorder[] = {3 1 4 0 5 2}
preorder[] = {0 1 3 4 2 5}
Output: 3 4 1 5 2 0
Explanation: The tree will look like
       0
    /     \
   1       2
 /   \    /
3    4   5

Expected Time Complexity: O(N*N).
Expected Auxiliary Space: O(N).


problem link --> https://practice.geeksforgeeks.org/problems/construct-tree-1/1

//CODE

//VVIP
class Solution{
    public:
    int findPosition(int in[],int element,int start,int end)
    { 
        for(int i=start;i<=end;i++)
        { 
            if(in[i]==element)
            { 
                return i;
            }
        }
        return -1;
    }
    
    //pass the preorderindex as byreference as it can change
    Node *solve(int in[],int pre[],int &preorderIndex,int inorderStart,int inorderEnd,int n )
    { 
        //base case
        
        //if iterator crosses the preorder as no root left and inorder array search index over
        if(preorderIndex>=n || inorderStart>inorderEnd)
        { 
            return NULL;
        }
        
        //creating a root node from element from preorder for the ans        
        int element = pre[preorderIndex];
        Node *root = new Node(element);
        preorderIndex++;
        
        //finding that element in inorder
        int position = findPosition(in,element,inorderStart,inorderEnd);
        
        //calling recursive left and right for root by checking in inoder
        root->left = solve(in,pre,preorderIndex,inorderStart,position-1,n);
        root->right = solve(in,pre,preorderIndex,position+1,inorderEnd,n);
        
        return root;
    }
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderIndex =0;
        int inorderStart = 0; int inorderEnd = n-1;
        
        Node *ans = solve(in,pre,preorderIndex,inorderStart,inorderEnd,n);
        return ans;
    }