#include<iostream>
using namespace std;

//try ->block that represents the code in which exception will arise.
//catch->block that handles the arised exception.
//throw->it is keyword used to create exception explicitly.


int main(){
    int a,b;

    cout<<"Enter two Numbers"<<endl;
    cin>>a>>b;
    
    
    try{

       if(b<=0){
           throw b;
       }
    }
    catch(...){
        cout<<"You have Entered Invalid Number"<<endl;
    }

    return 0;
}