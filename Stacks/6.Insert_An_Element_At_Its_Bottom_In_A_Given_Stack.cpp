/*
Question-

Insert An Element At Its Bottom In A Given Stack


problem link -->https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=0

*/


//CODE


#include <bits/stdc++.h>     T.C-->O(N)  ||   S.C-->O(N)

void solve(stack<int> &myStack, int x) { 

        //base case
        if (myStack.empty()) {
            myStack.push(x);
            return;
        }
            int num = myStack.top();
            myStack.pop();

            //  RECURSIVE CALL
            solve(myStack,x);

            myStack.push(num);


}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
            solve(myStack,x);
            return myStack;

}