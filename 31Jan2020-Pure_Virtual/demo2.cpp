//Interface

#include<iostream>
using namespace std;

//Interface is a class in which only pure virtual functions exists.
class Parent{
    public:
        Parent(){
            cout<<"Parent Interface Constructor "<<endl;
        }
        virtual void display() = 0;

        virtual void show() = 0;

        virtual void print() = 0;
};

class Child : public Parent{
    public:
        Child() : Parent() {
            cout<<"Child Class Constructor"<<endl;
        }

        void display(){}
        void show(){}
        void print(){}
};

int main(){
    // Parent obj;
    Child obj;

    return 0;
}


