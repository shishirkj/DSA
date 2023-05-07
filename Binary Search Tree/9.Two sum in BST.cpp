Find a pair with given target in BST
Given a Binary Search Tree and a target sum. Check whether there's a pair of Nodes in the BST with value summing up to the target sum. 

Example 1:

Input:
        2
      /   \
     1     3
sum = 5
Output: 1 
Explanation: 
Nodes with value 2 and 3 sum up to 5.
Example 2:

Input:
           6
          /    
         5     
        /
       3 
     /  \
    1    4
sum = 2
Output: 0 
Explanation: 
There's no pair that sums up to 2.


problem link --> https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/



//App 1      T.C--> O(N2)    S.C-->O(N)


pick each element 

            target-element = ans 
            find ans in BST if present return true else false



  //app 2       t.c--> O(N)   s.c-->O(N)


  //CODE

  
  void inorder(struct Node* root,vector<int>&ans)
        { 
            if(root==nullptr){return;}
            inorder(root->left,ans);
            ans.push_back(root->data);
            inorder(root->right,ans);
        }
        
     
    int isPairPresent(struct Node *root, int target)
    {
              vector<int>ans ;
              
            // step 1 -->  get inorder sequence   
        inorder(root,ans);
            int i =0;int j = ans.size()-1;

            //step 2 --> use two pointer algo to find two sum in inorder(ans) vector
            while(i<j)
            {
                if (ans[i]+ans[j]== target)
                {
                    return 1;
                }
                else if ((ans[i]+ans[j])>target)
                { 
                    j--;
                }
                else
                { 
                    i++;
                }  
            }
            return 0;
    }          