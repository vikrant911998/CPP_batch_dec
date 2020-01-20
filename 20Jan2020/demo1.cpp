//Single Inheritance
#include<iostream>
using namespace std;

//Call By Value
void swap(int a, int b){
    int temp = a; //10
    a = b; //20
    b = temp; // 10
    cout<<"Inside Swap Function ";
    cout<<"A = "<<a<<" and B = "<<b<<endl;
}

int main(){
    int a = 10,b = 20;
    swap(a,b);

    cout<<"A = "<<a<<" and B = "<<b<<endl;

    return 0;
}