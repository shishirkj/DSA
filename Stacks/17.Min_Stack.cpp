/*
Question-
Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. Your task is to complete all the functions, using stack data-Structure.


Example 1:

Input:
Stack: 18 19 29 15 16
Output: 15
Explanation:
The minimum element of the stack is 15.

Example 2:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2


question link --> https://leetcode.com/problems/min-stack/description/
''   ''      --> https://practice.geeksforgeeks.org/problems/special-stack/1
*/


//CODE

T.C-->O(N)  S.C-->O(N)

stack<int>ss;

void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
        if(ss.size()==0 || ss.top()>=a){
            ss.push(a);
        }
	 return;
	
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	int ans = s.top();
	s.pop();
	if(ss.top()==ans){
	    ss.pop();
	}
	return ans; 
}

int getMin(stack<int>& s){
	// Your code goes here
	if(ss.size()==0){return -1;}
	return ss.top();
}




//OPTIMIZED CODE

T.C--> O(N)  S.C--> O(1)

TO remember
 push --> 2x-MIN ELEMENT
 POP --> 2(MINELEMENT) -Y

class MinStack {
public:
    stack<long long> s;
    long long ME; // minimum element
    
    MinStack() {
      
    }
    
    void push(int val) {
        if (s.empty()) {
            s.push(val);
            ME = val;
        }
        else if (val >= ME) {
            s.push(val);
        }
        else { // val < ME
            s.push(2 * (long long)val - ME);
            ME = val;
        }
    }
    
    void pop() {
       
        
        if (s.top() >= ME) {
            s.pop();
        }
        else { // s.top() < ME
            ME = 2 * (long long)ME - s.top();
            s.pop();
        }
        
    }
    
    int top() {
        if (s.empty()) {
            return -1;
        }
        
        if (s.top() >= ME) {
            return s.top();
        }
        else { // s.top() < ME
            return (int)ME;
        }
    }
    
    int getMin() {
        if (s.empty()) {
            return -1;
        }
        return (int)ME;
    }
};
