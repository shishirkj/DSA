


// Taking 4*4 matrix 

#include<iostream>
using namespace std;

bool Keypresent(int arr[][4],int key,int row,int column){
            for(int row=0;row<4;row++){
                for(int column=0;column<4;column++){
                    if(key == arr[row][column])
                    return 1;
                }
            }
            return 0;
}
void indexelement(int arr[][4],int key,int row,int column){
     for(int row=0;row<4;row++){
        for(int column=0;column<4;column++){
             if(key == arr[row][column])
                    cout<<row<<" row"<<" "<<column<<" column"<<endl;
                }
            }
}



int main(){


int arr[4][4];int key;

cout<<"Enter the elements of matrix:"<<endl;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}


for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"Enter the key:"<<endl;
cin>>key;


if(Keypresent(arr,key,4,4)==1){
    cout<<"Key is present"<<endl;
     indexelement(arr,key,4,4);
     }

else{
    cout<<"Key is not present"<<endl;
}
return 0;


}


