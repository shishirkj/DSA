/*
Question-
Smallest number on leftGiven an array a of integers of length n, find the nearest smaller number for every element such that the smaller element is on left side.If no small element present on the left print -1.

Example 1:

Input: n = 3
a = {1, 6, 2}
Output: -1 1 1
Explaination: There is no number at the 
left of 1. Smaller number than 6 and 2 is 1.
Example 2:

Input: n = 6
a = {1, 5, 0, 3, 4, 5}
Output: -1 1 -1 0 3 4
Explaination: Upto 3 it is easy to see 
the smaller numbers. But for 4 the smaller 
numbers are 1, 0 and 3. But among them 3 
is closest. Similary for 5 it is 4.


question link --> https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

*/


//CODE

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)




 vector<int> leftSmaller(int n, int a[]){
        
        vector<int>v;  stack<int>s;
        
        for(int i=0;i<n;i++){
            
       //condn 1:if stack is empty
        if(s.size()==0){v.push_back(-1);}
        
        //condn 2: if stack top <arr[i]
        else if(s.size()>0 && s.top()<a[i]){ 
            v.push_back(s.top());
        }
        
        //cond 3: if stack top>=arr[i]
        
        else if(s.size()>0 && s.top()>=a[i])
        { 
            while(s.size()>0 && s.top()>=a[i]){s.pop();}
            if(s.size()==0){v.push_back(-1);}
            else{
                v.push_back(s.top());
            }
        }
                
                s.push(a[i]);
                            }
                            return v;
    }

    //CODE

    vector<int> leftSmaller(int n, int a[]){
        // code here
        vector<int>v;
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && s.top()>=a[i]){
                s.pop();}
            if(s.empty()){
                v.push_back(-1);}
            else{
                v.push_back(s.top());}
            s.push(a[i]);}
         return v;}