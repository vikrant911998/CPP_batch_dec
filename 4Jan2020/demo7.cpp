#include<iostream>
using namespace std;

int main(){
    // int i=1;

    for(int i=1,j=1,k=1 ; i<=5 && j<=5 ; i++,j++,k = k+2){
        cout<<i<<" "<<j<<" "<<k<<endl;
    }

    // for( ; ; ){
        
    //     cout<<i<<endl;
    //     i++;
    //     if(i == 5){
    //         break;
    //     }
    // }

    return 0;
}