#include<iostream>
using namespace std;

int main(){
    int a = 20;
    int *ptr = &a;

    cout<<a<<endl;
    cout<<*ptr<<endl;

    cout<<endl;

    cout<<&a<<endl;
    cout<<ptr<<endl;

    cout<<endl;
    cout<<&ptr<<endl;


    return 0;
}