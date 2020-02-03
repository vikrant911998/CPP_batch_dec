#include<iostream>
using namespace std;


class Parent{
    protected:
        int id;
        string name;

    public:
        // Parent(int id, string name){
        //     this->id = id;
        //     this->name = name;
        // }

        void show(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
        }
};


class Child : public Parent{
    public:
        // Child(int id,string name){
        //     this->id = id;
        //     this->name = name;
        // }      
};

class Child2 : public Child{
    public:
        Child2(int id,string name){
            this->id = id;
            this->name = name;
        }
};

int main(){

    Child2 obj(101,"Vikrant");
    
    obj.show();

    return 0;
}