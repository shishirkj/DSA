//BRUTE FORCE
/*POWEER OF TWO NUMBERS
EXAMPLE -->    2^3-->8    ||||    2^2 --> 4
*/
#include<iostream>
using namespace std;



int power(int a,int b){
int result =1;
for(int i=1;i<=b;i++){
    result = result*a;
}
        return result;

}


int main(){
int a,b;
    cout<<"Enter a and b value"<<endl;
    cin>>a;
    cin>>b;
cout<<power(a,b)<<endl;
return 0;




}