//Deletion in Array

#include<iostream>
using namespace std;

int main(){
    int a[5] = {12,99,34,52,61};
    int index;

    cout<<"Enter the index"<<endl;
    cin>>index;

    for(int i=index ; i<4 ; i++){
        a[i] = a[i+1];
    }    
    a[4] = 0;

    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }


    return 0;
}