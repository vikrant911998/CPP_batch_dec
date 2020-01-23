#include<iostream>
using namespace std;

int m;

class A{

    public:
        int m;
        static int d;
        
};

int A::d = 0;

int main(){
    A obj;
    int m;

    cout<< m <<endl; //local Main Variable ->Garbage Value.
    cout<<::m<<endl; //Global Variable -> Zero.
    cout<< obj.m <<endl; //Class instance variable.
    cout<< A::d<<endl; //static variable (Class Variable).


    return 0;
}