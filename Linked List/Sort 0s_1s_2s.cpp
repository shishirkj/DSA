/*

Question-

Sort the list 



Example -->  i/p- [0,1,1,2,1,0]
            o/p- [0,0,1,1,1,2]



    problem link --> https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021        

*/



//Code

//T.C --> O(N)    S.C--> O(1)

Node* sortList(Node *head)
{
    // Write your code here.

    if (head == NULL || head->next == NULL) { return head; }

int ZeroCount=0;int OneCount =0;int TwoCount = 0;

//  Counting the number of 1's  2's  0's
            Node *temp = head;

                while(temp!=NULL){ 
                    if(temp->data==0){ZeroCount++; }
                else if(temp->data==1){OneCount++; }
              else if(temp->data==2){TwoCount++; }

              temp= temp->next;

                }

    temp = head;
//REPLACING THE LIST IN ORDER
    while(temp!=NULL){ 

            if(ZeroCount!=0)  {temp->data = 0;ZeroCount--;}
        else if(OneCount!=0)  {temp->data=1;OneCount--;}
        else if(TwoCount!=0)  {temp->data=2;TwoCount--;}


            temp = temp->next;

    }

    return head;


}


// 2ND APPROACH
//CODE

//NOT CHANGING ANYTHING IN THE ORIGINAL LIST

//   TC-->O(N)  S.C-->O(1)

void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}


Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        
        int value = curr -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2) {
            insertAtTail(twoTail, curr);
        }       
        curr = curr -> next;
    }
    
    //merge 3 sublist
    
    // 1s list not empty
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}