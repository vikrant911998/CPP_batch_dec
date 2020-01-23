//MultiLevel  Inheritance ->parent child parent child

#include<iostream>
using namespace std;

class A{
    public:
        void show1(){
            cout<<"Show of Class A"<<endl;
        }
};

class B : public A{
    public:
        void show2(){
            cout<<"Show of Class B"<<endl;
        }
};


class C : public B{
    public:
        void show3(){
            cout<<"Show of Class C"<<endl;
        }
};

int main(){
    B obj;
    obj.show1();
    obj.show2();

    C obj1;
    obj1.show1();
    obj1.show2();
    obj1.show3();


    return 0;
}
