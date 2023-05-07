Predecessor And Successor In BST

Problem Statement

Sample Input 1:
1
15 10 20 8 12 16 25 -1 -1 -1 -1 -1 -1 -1 -1
10
Sample Output 1:
8 12
Explanation Of Sample Output 1:
The tree can be represented as follows:

The inorder traversal of this tree will be 8 10 12 15 16 20 25.

Since the node with data 8 is on the immediate left of the node with data 10 in the inorder traversal, the node with data 8 is the predecessor.

Since the node with data 12 is on the immediate right of the node with data 10 in the inorder traversal, the node with data 12 is the successor.
Sample Input 2:
2 
10 5 -1 -1 -1 -1
5
20 -1 -1
20
Sample Output 2:
-1 10
-1 -1


problem link --> https://www.codingninjas.com/codestudio/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0


//CODE 
APPROACH 1 

inorder -> vector-> Binary search
                -> find key and return predecessor an successor

                T.C--> O(N logN) S.C->O(N)



 //approach 2

 T.C-->O(Height) S.C O(1)


 pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    BinaryTreeNode<int>*temp = root;
    int pre = -1;
    int succ = -1;
    
    //step 1-> find key an store all possible pre and suc

            while(temp->data!=key)
            {
                if(temp->data>key)
                {
                    succ = temp->data;
                    temp = temp->left;
                }
                else
                {
                    pre = temp->data;
                    temp = temp->right;
                }
            }

        //step 2 -> find pre and succ
        
        //pre
        BinaryTreeNode<int>*max = temp->left;

            while(max!=NULL)
            {
                pre = max->data;
                max= max->right;
            } 
            
        //succ
          BinaryTreeNode<int>*min = temp->right;
          while(min!=NULL)
           {
               succ = min->data;
               min = min->left;
           }

           
         pair<int,int>ans = {pre,succ};
         return ans;       
}               