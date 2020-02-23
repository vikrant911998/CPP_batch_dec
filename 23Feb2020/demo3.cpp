#include<iostream>
using namespace std;

int main(){
    int a[5]={0};

    try{
        a[7] = 123;
    }
    catch(...){ //ArrayIndexOutOfBoundException
        cout<<"Exception handled"<<endl;
    }

    return 0;
}