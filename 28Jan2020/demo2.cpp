//Pure Virtual Function and Abstract Class.

#include<iostream>
using namespace std;

class Parent{
    public:
        void display(){
            cout<<"Display of Class Parent"<<endl;
        }

        //Pure Virtual Function
        virtual void play() = 0;

        virtual void show(){
            cout<<"Show of Parent Class"<<endl;
        }
};  

class Child : public Parent{
    public:
        void show(){
            cout<<"Show of Child Class"<<endl;
        }

        void play(){
            
        }
};

int main(){



    return 0;
}