#include<iostream>
using namespace std;

int main(){
    int i=0;
    for( i=1 ; i<=5 ; i++){

        if(i == 4)
            continue;
            // exit(0);
            // break;
        
        cout<<i;
        cout<<"   Hello"<<endl;
    }

    cout<<"Value outside Loop "<<i<<endl;


    return 0;
}