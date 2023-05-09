Merge two sorted linked lists


Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.
 

Example 1:

Input:
N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
Output: 2 3 5 10 15 20 40
Explanation: After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.
Example 2:

Input:
N = 2, M = 2
valueN[] = {1,1}
valueM[] = {2,4}
Output:1 1 2 4
Explanation: After merging the given two
linked list , we have 1, 1, 2, 4 as
output.


Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(1)



//APPROACH 1

store in vectors and merge two array logic

space comp--> O(M+N)






//APPROACH 2

 Node* merge(Node* &h1, Node* &h2) {
    Node* dh = new Node(-1);
    Node* dt = dh;
    Node* t1 = h1;
    Node* t2 = h2;
    
    while (t1 != NULL && t2 != NULL) {
        if (t1->data < t2->data) {
            dt->next = t1;
            t1 = t1->next;
        } else {
            dt->next = t2;
            t2 = t2->next;
        }
        dt = dt->next;
    }
    
    // Append remaining nodes of either list to the merged list
    if (t1 == NULL) {
        dt->next = t2;
    } else {
        dt->next = t1;
    }
    
    // Return the head of the merged list
    Node* head = dh->next;
    delete dh;
    return head;
}

Node* sortedMerge(Node* head1, Node* head2) {
    if (head1 == NULL) {
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }
    return merge(head1, head2);
}