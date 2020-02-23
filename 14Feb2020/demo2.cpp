#include<iostream>
using namespace std;

// Exception Handling.
// Runtime Errors are termed as Exceptions.

class Demo{
        int id;
    public:
        void input(int id){
            this->id = id;
        }

        void output(){
            cout<<"Id = "<<id<<endl;
        }
};

int main(){
    Demo obj;
    // obj.id;
    int a,b;
    cout<<"Enter the two numbers"<<endl;
    cin>>a>>b;

    cout<<a/b<<endl;


    // obj.input(id);
    // obj.output();

    return 0;
}