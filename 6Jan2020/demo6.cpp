//Deletion in Array

#include<iostream>
using namespace std;

int main(){
    int a[5] = {12,99,34,52,61};
    int element;
    bool isFound = false;


    cout<<"Enter the Element"<<endl;
    cin>>element; //24

    
    for(int i=0;i<5;i++){

        if(a[i] == element){
            isFound = true;
            break;
        }

    }

    if(isFound){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }    

    return 0;
}