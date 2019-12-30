#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 20;
    int c = b%a;

    // cout<<c<<endl;
    // if(a <= b){ 
    //     cout<<"Equal "<<endl;
    // }
    // else{
    //     cout<<"Not Equal "<<endl;
    // }

    if(b%2 == 0 || b<15){
        cout<<"Inside the if block"<<endl;
    }


    return 0;
}


//Operators
// ->Arithmetic Operators ->+,-,*,/,%

// ->Relational Operators -> ==,!= ,<,>,<=,>=
// ->Logical Operators -> && , ||
// ->Bitwise Operators
