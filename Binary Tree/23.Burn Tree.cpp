Question
dream job!  

Given a binary tree and a node data called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. It is known that in 1 second all nodes connected to a given node get burned. That is its left child, right child, and parent.
Note: The tree contains unique values.


Example 1:

Input:      
          1
        /   \
      2      3
    /  \      \
   4    5      6
       / \      \
      7   8      9
                   \
                   10
Target Node = 8
Output: 7
Explanation: If leaf with the value 
8 is set on fire. 
After 1 sec: 5 is set on fire.
After 2 sec: 2, 7 are set to fire.
After 3 sec: 4, 1 are set to fire.
After 4 sec: 3 is set to fire.
After 5 sec: 6 is set to fire.
After 6 sec: 9 is set to fire.
After 7 sec: 10 is set to fire.
It takes 7s to burn the complete tree.
Example 2:

Input:      
          1
        /   \
      2      3
    /  \      \
   4    5      7
  /    / 
 8    10
Target Node = 10
Output: 5

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(height of tree)

//problm link --> https://practice.geeksforgeeks.org/problems/burning-tree/1



//CODE

Node *ParentMapping(map<Node*,Node*>&parentNode,Node *root,int target)
        {
            Node *res =NULL;
           
                parentNode[root]=NULL;
            
            queue<Node*>q;
                q.push(root);
                while(!q.empty())
                { 
                    Node *front = q.front();
                    q.pop();
                    if(front->data==target)
                    { 
                        res = front;
                    }
                    if(front->left)
                    { 
                        parentNode[front->left] = front;
                        q.push(front->left);
                    }
                     if(front->right)
                    { 
                        parentNode[front->right] = front;
                        q.push(front->right);
                    }
                }
                return res;
        }
        
       
       //rest of the step done 
 int BurnTree(Node *TargetNode, map<Node*,Node*>&parentNode)
     { 
            map<Node*,bool>visited;
            queue<Node*>q;
            
            int time =0;
            q.push(TargetNode);
            bool flag =0;
            
            visited[TargetNode] = true;
            while(!q.empty())
            { 
                //size isliye chaiye kyu ki iske neighbouring node (which is left right and parent) que mein daalne ke liye
                int size = q.size();
                for(int i=0;i<size;i++)
                { 
                    //processing neighbouring nodes
                    Node *front = q.front();
                    q.pop();
                    if(front->left && !visited[front->left])
                    { 
                        flag =1;
                        q.push(front->left);
                        visited[front->left] =1;
                    }
                     if(front->right && !visited[front->right] )
                    { 
                        flag =1;
                        q.push(front->right);
                        visited[front->right] =1;
                    }
                    if(parentNode[front] && !visited[parentNode[front]])
                    { 
                        flag =1;
                        q.push(parentNode[front]);
                        visited[parentNode[front]] =1;
                    }
                    
                }
                
                if(flag ==1){time++;}
                flag =0;
            }
            return time;
            
     }
 
    int minTime(Node* root, int target) 
    {
       //Algo:
       
      //step1: to get the parent node of eeach subnode create map  by level order trav
      //step2: reach to the target node
      //step3: after reaching the node create a visited map and do level order trav
      //step4: if in queue  time++;
      //step5: return time
      
      map<Node*,Node*>parentNode;
      Node *TargetNode = ParentMapping(parentNode,root,target);
      
          int time = BurnTree(TargetNode,parentNode);
          
          return time;
    }