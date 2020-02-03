#include<iostream>
using namespace std;

//Global Static variable
static int count = 0;

int temp(){
    //Static variable inside the temp function
    static int count = 45;

    return count;
}


int main(){
    int str = 23;

    cout<<str<<endl;
    cout<<::count<<endl;
    
    int result = temp();
    cout<<result<<endl;


    return 0 ;
}