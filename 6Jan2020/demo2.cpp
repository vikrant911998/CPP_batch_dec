//Insertion in Array

#include<iostream>
using namespace std;

int main(){
    int a[5] = {12,34,52,61,};
    int index,element;

    cout<<"Enter the index"<<endl;
    cin>>index;

    cout<<"Enter the Element"<<endl;
    cin>>element;

    for(int i=4 ; i>index ; i--){
        a[i] = a[i-1];
    }    
    a[index] = element;

    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }


    return 0;
}