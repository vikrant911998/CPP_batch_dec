//Function Overriding

#include<iostream>
using namespace std;

class Parent1{
    public:
        void show(int a){
            cout<<"Show of Parent"<<endl;
        }
};

class Parent2{
    public:
        void show(int a){
            cout<<"Show of Child"<<endl;
        }
};

class Child1 : public Parent2, public Parent1{
    public:
        void show(){
            cout<<"Show of Child One"<<endl;
        }
};

int main(){
    Child1 obj;
    obj.show(23);

    return 0;
}