//Prime number


#include<iostream>
using namespace std;
bool isprime(int n){

    if(n==1 || n==0)
            return false;
 for(int i=2;i<n;i++){
    if(n%i==0){
        return false;
    }
 }
 return true;   

}

int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    if(isprime(n)==1){
        cout<<n<<" is prime number"<<endl;
    }
    else{
        cout<<n<<"not a prime number"<<endl;
    }


      return 0; 

}