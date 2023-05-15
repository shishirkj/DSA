Merge K sorted linked lists
Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

Example 1:

Input:
K = 4
value = {{1,2,3},{4 5},{5 6},{7,8}}
Output: 1 2 3 4 5 5 6 7 8
Explanation:
The test case has 4 sorted linked 
list of size 3, 2, 2, 2
1st    list     1 -> 2-> 3
2nd   list      4->5
3rd    list      5->6
4th    list      7->8
The merged list will be
1->2->3->4->5->5->6->7->8.
Example 2:

Input:
K = 3
value = {{1,3},{4,5,6},{8}}
Output: 1 3 4 5 6 8
Explanation:
The test case has 3 sorted linked
list of size 2, 3, 1.
1st list 1 -> 3
2nd list 4 -> 5 -> 6
3rd list 8
The merged list will be
1->3->4->5->6->8.




problem link --> https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1




T.C--> O(N*K*LOGK)

S.C--> O(K)



//CODE

class Solution{
  public:
   //'compare' function used to build up the priority queue as we are pushing node and not data
 struct compare
{
    bool operator()(
         struct Node* a, struct Node* b)
    {
        return a->data > b->data;
    }
};
   
    Node * mergeKLists(Node *arr[], int K)
    {
           priority_queue<Node*,vector<Node*>,compare>minHeap;
           
            // Push the head nodes of all
    // the k lists in 'pq'
           for(int i =0;i<K;i++)
           { 
               minHeap.push(arr[i]);
           }
           
           
           
           
        Node* dummy_head = new Node(-1);
        Node* temp = dummy_head;
        
       
           while(!minHeap.empty())
           { 
                // Get the top element of 'pq'
               Node*curr = minHeap.top();
               minHeap.pop();
               
                   // Add the top element of 'pq'
        // to the resultant merged list
               temp->next = curr;
               temp = temp->next; 
               
                // Check if there is a node
         // next to the 'top' node
        // in the list of which 'top'
        // node is a member
        
        
               if(curr->next!=NULL)
               { 
                      // Push the next node of top node
        // in 'pq'
                   minHeap.push(curr->next);
               }
               
           }
           
           
           // Address of head node of the required
    // merged list
           return dummy_head->next;
           
    }
};