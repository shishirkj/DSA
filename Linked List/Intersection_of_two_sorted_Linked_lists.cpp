/*
Question-
Intersection of two sorted Linked lists

Given two linked lists sorted in increasing order, create a new linked list representing the intersection of the two linked lists. The new linked list should be made with its own memory the original lists should not be changed.
Note: The linked list elements are not necessarily distinct.

Example 1:
Input:
L1 = 1->2->3->4->6
L2 = 2->4->6->8
Output: 2 4 6
Explanation: For the given first two
linked list, 2, 4 and 6 are the elements
in the intersection.

Example 2:
Input:
L1 = 10->20->40->50
L2 = 15->40
Output: 40

problem link --> https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1
*/


//CODE          Time Complexity : O(n+m)   || Auxilliary Space : O(n+m)


void insertAtTail(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    if(head2==NULL){return NULL;}
    if(head1 == NULL){return NULL;}
    Node *Clonehead = NULL;Node *Clonetail =NULL;
            Node *temp = head1;Node *first = head2;
            while(temp!=NULL && first!=NULL){ 
                if(temp->data==first->data){ 
                    insertAtTail(Clonehead,Clonetail,temp->data);
                    temp= temp->next;
                    first = first->next;
                    
                }
                else if(temp->data < first->data){
            temp=temp->next;
        }
        else{
            first=first->next;
        }
            }
            return Clonehead;
            
    
}

