//Hierarchical Inheritance ->One parent and Many childs only.
#include<iostream>
using namespace std;

//Parent Class 
class A{
    int a;
    public:
        void show1(){
            cout<<"Show of Class A"<<endl;
        }
};

//Child Class
class B : public A{
    int b;
    public:
        void show2(){
            cout<<"Show of Class B"<<endl;
        }

};

//Child Class
class C : public A{
    int b;
    public:
        void show3(){
            cout<<"Show of Class C"<<endl;
        }
};

int main(){
    B obj;
    obj.show1();
    obj.show2();

    cout<<endl;

    C obj1;
    obj1.show1();
    obj1.show3();

    return 0;
}