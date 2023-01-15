#include<iostream>
using namespace std;

void Row_Sum(int arr[][4],int row,int column){
        for(int row =0;row<4;row++){
            int sum =0;
            for(int column =0;column<4;column++){
                sum = sum + arr[row][column];
            }
            cout<<sum<<" ";
        }


}


int main(){


int arr[4][4];int key;
// Taking i/p (elements)of matrix

cout<<"Enter the elements of matrix:"<<endl;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}

// Printing the elements of matrix

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

Row_Sum(arr,4,4);


return 0;
}