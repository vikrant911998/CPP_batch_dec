#include<iostream>
using namespace std;

// void add(int,int);
// void add(int=0,int=0,int=0,int=0);

void add(int a=0,int b=0,int c=0,int d=0){
    cout<<a+b+c+d<<endl;
}

int main(){
    add();
    add(2);
    add(2,3);
    add(2,3,4);
    add(2,3,4,5);


    return 0;
}

// void add(int a,int b){
//     cout<<a+b<<endl;
// }

