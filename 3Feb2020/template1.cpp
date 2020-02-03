#include<iostream>
using namespace std;

template <typename A>

void show(A a){
    cout<<"Inside Display Function"<<endl;
}

template <typename B, typename C>

void display(B b, C c){ //int,string
    cout<<"Passed Argument = "<<b<<c<<endl;
}


// void show1(string s){
//     cout<<"String argument = "<<s<<endl;
// }



int main(){
    show(23);    
    show("Hello");
    show('A');
    show(34.556);
    show(true);
    show(2346543223456788765);
    display(true,"Hello");

    return 0;
}