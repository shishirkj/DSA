Merge two BSTs

Given two BSTs, return elements of both BSTs in sorted form.


Example 1:

Input:
BST1:
       5
     /   \
    3     6
   / \
  2   4  
BST2:
        2
      /   \
     1     3
            \
             7
            /
           6
Output: 1 2 2 3 3 4 5 6 6 7
Explanation: 
After merging and sorting the
two BST we get 1 2 2 3 3 4 5 6 6 7.
Example 2:

Input:
BST1:
       12
     /   
    9
   / \    
  6   11
BST2:
      8
    /  \
   5    10
  /
 2
Output: 2 5 6 8 9 10 11 12
Explanation: 
After merging and sorting the
two BST we get 2 5 6 8 9 10 11 12.



APProach 1 :

Time complexity : O(M+N)+ O(N)== O(M+N)
Space complexity: O(M+N)




 void inorder(Node* &root,vector<int>&BST)
    
    { 
        if(root==NULL){return;}
        
        inorder(root->left,BST);
        BST.push_back(root->data);
        inorder(root->right,BST);
    }
    
    void mergeArray(vector<int>&arr1,vector<int>&arr2,vector<int>&arr3)
    
    { 
        // merging two vectors in array3
        int i = 0 ;int j =0;int k =0;
        while(i<arr1.size() && j<arr2.size())
        {
            if(arr1[i]<arr2[j])
            { 
                arr3[k++] = arr1[i];
                i++;
            }
            else
            {
                arr3[k++]=arr2[j];
                j++;
            }
        }
        
        while(i<arr1.size())
        { 
            arr3[k++] = arr1[i];
            i++;
        }
         while(j<arr2.size())
        { 
            arr3[k++] = arr2[j];
            j++;
        }
        
    }

     Node * InorderToBst(int start,int end,vector<int>&ans)
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
    
    vector<int> merge(Node *root1, Node *root2)
    {
      vector<int>BST1 ;vector<int>BST2;
      
      // stp1 --> store inorder vector for both
        inorder(root1,BST1);
        inorder(root2,BST2);
        
        //step 2--> merge two  arrays
        vector<int>BST3(BST1.size()+BST2.size());
        mergeArray(BST1,BST2,BST3);
        


        //step 3 --> inorder to BST

      return  InorderToBst(0,ans.size()-1,BST3);
      
    }



    APPROACH 2


