#include<iostream> 
using namespace std;

int power(int n) {

    //base case 
    if(n == 0)
        return 1;

    //recursive relation
    return 2 * power(n-1);    // You can change 2 to 3,4,5....etc  to find power of any number
}

int main() {

    int n;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;

    return 0;
}