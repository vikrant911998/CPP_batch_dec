//Deletion in Array

#include<iostream>
using namespace std;

int main(){
    int a[5] = {12,99,34,52,61};
    int element;

    cout<<"Enter the Element"<<endl;
    cin>>element; //24


    for(int i=0;i<5;i++){

        if(a[i] == element){
            cout<<"Element Found"<<endl;
            exit(0);
        }

    }

    cout<<"ELement Not Found"<<endl;

    


    return 0;
}