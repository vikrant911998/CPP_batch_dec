#include<iostream>
using namespace std;

//Abstract Class -> Whose object cannot be created.
class Parent {
    public:
        void display(){
            cout<<"Show of Parent"<<endl;
        }
        //Pure Virtual Function ->Mandatory for child to override this.
        virtual void show() = 0;
};


//whenever a class will inherit the abstract class then it have two options either to become abstract itself  or override the pure virtual function of parent class.


class Child : public Parent{
    public:
        void show(){
            cout<<"Show of Child"<<endl;            
        }
};


int main(){
    Child obj;
    obj.show();

    return 0;
}