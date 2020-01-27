#include<iostream>
using namespace std;

class A{
    public:
        void show(){
            cout<<"Show of Class A"<<endl;
        }
};

class B : public A{
    public:
        void show(){
            cout<<"Show of Class B"<<endl;
        }
};


int main(){
    // A obj;
    // obj.show();

    // A *ptr = &obj;
    // ptr->show();
    B obj;

    A *ptr = &obj;

    ptr->show();


    return 0;
}