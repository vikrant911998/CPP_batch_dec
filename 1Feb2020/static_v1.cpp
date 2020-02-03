#include<iostream>
using namespace std;

//Global Static variable
static int count = 0;

void temp(){
    //Static variable inside the temp function
    static int count = 45;

    cout<<count<<endl;
}


int main(){
    int str = 23;

    cout<<str<<endl;
    cout<<::count<<endl;
    temp();

    return 0 ;
}