//For-Each Loop
#include<iostream>
using namespace std;


int main(){
    int a[10] = {100,23,51,61,26,67,82,8,9,2};

    // for(int i=0 ; i<10 ; i++){
    //     cout<<a[i]<<" ";
    // }

    
    
    //for-each loop
    for( int element : a ){
        cout<<element<<" ";
    }

    cout<<endl;
    return 0;
}