#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    string address;

    public:
        //Default Constructor
        Student(){
           cout<<"Constructor Called..."<<endl; 
           id = 0; //it is initialiazed so that no garbage value gets stored inside the id variable.
           name="";
           address="";
        }

        void output(){
            cout<<id<<endl;
            cout<<name<<endl;
            cout<<address<<endl;
        }


};

int main(){
    Student obj;
    obj.output();
    return 0;
}