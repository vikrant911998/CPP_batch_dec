#include<iostream>
using namespace std;

class Demo{
    int id;
    string name;
    public:
        Demo(){

        }
        Demo(Demo &obj){
            cout<<"Copy Constructor Called"<<endl;
            this->id = obj.id;
        }
        void input(int id){
            this->id = id;
        }
        void show(){
            cout<<"Id = "<<id<<endl;
        }
};

int main(){
    Demo obj;
    obj.input(12);

    Demo obj1(obj);

    obj.show();
    obj1.show();
    


    return 0;
}