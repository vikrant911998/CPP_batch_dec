//Function Overriding in C++

#include<iostream>
using namespace std;


class Demo{
    int id;
    
    public:
        static int count;

        Demo(int id){
            this->id = id;
        }

        void show(){
            cout<<"id = "<<id<<endl; //non-static variable.
            cout<<"Count = "<<count<<endl; //static variable.
        }

        static void display(){
            //we don't use non static variable inside the static function because the object of the non-static variable is not specified because the static function will be called by the Class Directly.
            // cout<<"id = "<<id<<endl; //non-static variable(Error)
            cout<<"Count = "<<count<<endl; //static variable.           
        }
};

int Demo::count = 10;

int main(){
    Demo obj(101);
    obj.show();
    Demo::display();
    obj.show();

    return 0;
}