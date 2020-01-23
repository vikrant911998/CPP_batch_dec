//Multiple  Inheritance -> Multiple Parent and One Child

#include<iostream>
using namespace std;

class A{
    public:
        void show1(){
            cout<<"Show of Class A"<<endl;
        }
};

class B {
    public:
        void show2(){
            cout<<"Show of Class B"<<endl;
        }
};


class C : public A, public B{
    public:
        void show3(){
            cout<<"Show of Class C"<<endl;
        }
};

int main(){
    

    C obj1;
    obj1.show1();
    obj1.show2();
    obj1.show3();


    return 0;
}
