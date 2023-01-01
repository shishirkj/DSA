/*
QUESTION-
What is the length of the given string

EXAMPLE - 
1.
RAHUL 
string length -> 5

2.
ELON
string length -> 4

*/


//CODE

#include<iostream>
using namespace std;
int main(){

int count =0;
char name[20];
cout<<"Enter your name: ";
cin>>name;
cout<<"Your name is " ;
cout<< name<<endl;
for(int i=0;name[i]!='\0';i++){
        count++;
}
cout<<"Length of the string is ";
cout<<count;

}

