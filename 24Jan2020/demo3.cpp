//Function Overriding

#include<iostream>
using namespace std;

class Parent{
    public:
        void show(int a){
            cout<<"Show of Parent"<<endl;
        }
};

class Child : public Parent{
    public:
        void show(int a){
            cout<<"Show of Child"<<endl;
        }
};

class Child1 : public Child{
    public:
        void show(int a){
            cout<<"Show of Child One"<<endl;
        }
};

int main(){
    Child1 obj;
    obj.show(23);

    return 0;
}