//Problem link --> https://practice.geeksforgeeks.org/problems/factorial5739/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article 

#include<iostream> 
using namespace std;

int factorial(int n) {
    
    //base case
    if(n==0)
        return 1;

    int smallerProblem = factorial(n-1);   
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main() {

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}
