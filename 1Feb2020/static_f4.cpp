#include<iostream>
using namespace std;

class Demo{
    int id;
    static int count;

    public:
        Demo(int id){
            this->id = id;
        }
        void show(){
            cout<<id<<endl;
            cout<<count<<endl;
        }
        static void display(){
            // cout<<id<<endl;
            cout<<count<<endl;
        }
};

int Demo::count = 23;


int main(){
    Demo obj(12);
    obj.show();

    Demo::display();


    return 0;
}