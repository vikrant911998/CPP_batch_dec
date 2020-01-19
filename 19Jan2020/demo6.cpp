//Types Of Inheritance
//Single Inheritance -> One parent and One Child.


#include<iostream>
using namespace std;

class A{
        int a;
    public:
    
        A(){
            a = 2;
        }
        
        void show(){
            cout<<"A's Value = "<<a<<endl;
        }
};


class B : public A{
    int b;
    public:
        B():A(){
            b = 100;
        }
        void display(){
            cout<<"B's value = "<<b<<endl;
        }
};

int main(){
    B obj;
    obj.show();
    obj.display();


    return 0;
}