/*
Question-
of the first K elements of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.

enqueue(x) : Add an item x to rear of queue
dequeue() : Remove an item from front of queue
size() : Returns number of elements in queue.
front() : Finds front item.
Note: The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.
Example 1:

Input:
5 3
1 2 3 4 5

Output: 
3 2 1 4 5

Explanation: 
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.

Example 2:

Input:
4 4
4 3 2 1

Output: 
1 2 3 4

Explanation: 
After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.

problem link --> https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
*/

Expected Time Complexity : O(N)
Expected Auxiliary Space : O(K)


//CODE

queue<int> modifyQueue(queue<int> q, int k) {
    stack<int>s;
            //step1: pop first k elements from q and put in stack
            
            for(int i=0;i<k;i++)
            {
                s.push(q.front());
                q.pop();
            }
            
            
            //step2: fetch from stack and push into q
            
            while(!s.empty())
            {
                q.push(s.top());
                s.pop();
                
            }
            //step3: first (n-k) element from elemnt and push back
            
            int t = q.size()-k;
            
            while(t--)
            {
                int val = q.front();
                q.pop();
                q.push(val);
            }
            
            return q;
}