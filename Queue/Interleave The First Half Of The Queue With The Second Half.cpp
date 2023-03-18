/*
Question-

i/p --> {10 20 30 40 50 60}

o/p--> {10 40 20 50 30 60}

question link -->https://www.codingninjas.com/codestudio/problems/interleave-the-first-half-of-the-queue-with-the-second-half_1169450?leftPanelTab=3

*/



//CODE

using stack


 #include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    stack<int> s;
    int n=q.size()/2;
    int count=0;
    while(count<n){
        s.push(q.front());
        q.pop();
        count++;
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    count=0;
    while(count<n){
        int ele=q.front();
        q.push(ele);
        q.pop();
        count++;
    }
    count=0;
    while(count<n){
        s.push(q.front());
        q.pop();
        count++;
    }
    while(!s.empty()){
        int stackele=s.top();
        s.pop();
        q.push(stackele);
        int qele= q.front();
        q.pop();
        q.push(qele);
    }
