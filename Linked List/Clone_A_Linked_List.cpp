/*
Question-
Clone a linked list with next and random pointer
You are given a special linked list with N nodes where each node has a next pointer pointing to its next node. You are also given M random pointers, where you will be given M number of pairs denoting two nodes a and b  i.e. a->arb = b.

Construct a copy of the given list. The copy should consist of exactly N new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.

ArbitLinked List1

Example 1:

Input:
N = 4, M = 2
value = {1,2,3,4}
pairs = {{1,2},{2,4}}
Output: 1
Explanation: In this test case, there
are 4 nodes in linked list.  Among these
4 nodes,  2 nodes have arbitrary pointer
set, rest two nodes have arbitrary pointer
as NULL. Second line tells us the value
of four nodes. The third line gives the
information about arbitrary pointers.
The first node arbitrary pointer is set to
node 2.  The second node arbitrary pointer
is set to node 4.
Example 2:

Input:
N = 4, M = 2
value[] = {1,3,5,9}
pairs[] = {{1,1},{3,4}}
Output: 1
Explanation: In the given testcase ,
applying the method as stated in the
above example, the output will be 1.



Problem link --> https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

*/



//  Approach 1 (counting)

// COMPLEXITIES :

// Time Complexity :  O(N^2)

// Space Complexity : O(1)

//CODE 

Node *copyList(Node *head)
    {

        // step 1 :  clone the linked list
        Node * cloneHead = new Node(-1);
        Node * cloneTemp = cloneHead;
        
        Node * OriginalTemp = head;
        while(OriginalTemp){
            
            Node * newNode = new Node(OriginalTemp->data);
            cloneTemp->next = newNode;
            cloneTemp = newNode;
            
            OriginalTemp = OriginalTemp->next;
        }
        
// step 2 : count how far random pointer is pointing in original linkd list and then decrease the count and copy it in clone linked list
        OriginalTemp = head;
        cloneTemp = cloneHead->next; 
        while(OriginalTemp){
            
            int cnt=0;
            
            Node * temp1 = head;
            while(temp1 != OriginalTemp->arb ){
                temp1 = temp1->next;
                cnt++;
            }
            
            Node * temp2 = cloneHead->next;
            while(cnt>0){
                temp2 = temp2->next;
                cnt--;
            }
            
            cloneTemp->arb = temp2;
            
            
            OriginalTemp = OriginalTemp->next;
            cloneTemp = cloneTemp->next;
        }
        
        
        return cloneHead->next;
        
    }







//Approach 2(using Mapping)          T.C--> O(N) S.C--> O(N)
//code

class Solution
{
    
    
    
private:

void insertAtTail(Node *&head,Node *&tail,int data){ 
    Node *newNode = new Node(data); 
            if(head==NULL){ 
                head = newNode;
                tail = newNode;
            }
            else{ 
                
                tail->next = newNode;
                tail = tail->next;
            }
}
    public:
    Node *copyList(Node *head)
    {
        Node *dummyHead = NULL;Node *dummytail = NULL;
        //Write your code here
        Node *temp = head;
        
        //step 1 --> MAKING A CLONE LIST
        
        while(temp!=NULL){ 
            insertAtTail(dummyHead,dummytail,temp->data);
            temp = temp->next;
        }
        
        
        
        // step 2 --> mapping it and marking the random pointer
        
        Node *OriginalNode = head;
        Node * CloneNode = dummyHead;
        
            unordered_map<Node*,Node*>Mapping;
            //mapping done
            while(OriginalNode!=NULL){ 
                Mapping[OriginalNode] = CloneNode;
                OriginalNode = OriginalNode->next;
                CloneNode = CloneNode->next;
            }
            
            //marking the random pointer
               OriginalNode = head;
                CloneNode = dummyHead;
            while(OriginalNode!=NULL){
                
                CloneNode->arb = Mapping[OriginalNode->arb];
                  OriginalNode = OriginalNode->next;
                CloneNode = CloneNode->next;
                
            }
            
            return dummyHead;
    }

};



//Approach 2 (BEST APPROACH)   T.C-->O(N)  S.C-->O(1)



class Solution
{
    private:
    void InsertAtTail(Node * &head,Node * &tail,int d){
        Node * newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    public:
    Node *copyList(Node *head)
    {
        // step 1 : create a clone list
        Node * cloneHead = NULL;
        Node * cloneTail = NULL;
        
        Node * temp = head;
        while(temp != NULL){
            InsertAtTail(cloneHead,cloneTail,temp->data);
            temp = temp->next;
        }
        
        
        // step 2 : Add clone nodes in between original list nodes.

        Node * originalTemp = head;
        Node * cloneTemp = cloneHead;
        
        while(originalTemp != NULL ){
            Node * savingOriginalTempKaNext = originalTemp->next;
            originalTemp->next = cloneTemp;
            Node * savingCloneTempKaNext = cloneTemp->next;
            cloneTemp->next = savingOriginalTempKaNext;
            
            originalTemp = savingOriginalTempKaNext;
            cloneTemp = savingCloneTempKaNext;

        }
        
        // step 3 : Handle random ptr 
        originalTemp = head;
        cloneTemp = cloneHead;
        
        while(originalTemp && originalTemp->next){
            
            if(originalTemp->arb)
                originalTemp->next->arb = originalTemp->arb->next;
            else
                originalTemp->next->arb = NULL;

        
            originalTemp = originalTemp->next->next;
            
        }
        
        // step 4 ; revert changes done in step2
        originalTemp = head;
        cloneTemp = cloneHead;
        
        while(originalTemp){
            originalTemp->next = cloneTemp->next;
            originalTemp = originalTemp->next;
            
            if(originalTemp != NULL){
                cloneTemp->next = originalTemp->next;
            }
            cloneTemp = cloneTemp->next;
        }
        
        // step 5 : return ans
        return cloneHead;
        
    }

};
