#include<iostream>
using namespace std;

class Parent{
    public:
        void display(){
            cout<<"Display of Class Parent"<<endl;
        }

        virtual void show(){
            cout<<"Show of Parent Class"<<endl;
        }
};  

class Child : public Parent{
    public:
        void show(){
            cout<<"Show of Child Class"<<endl;
        }
};

int main(){
    Child obj;
    obj.show();
    
    Parent *ptr;
    ptr = &obj;
    
    ptr->show();


    return 0;
}