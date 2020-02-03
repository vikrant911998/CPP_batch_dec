#include<iostream>
using namespace std;

class Demo{
    int id;
    static int count; //Error -> static data member cannot be initialized here.
    
    public:
        // static int count;

        Demo(int id){
            // count = 0; -> Error
            this->id = id;
        }
        void show(){
            cout<<id<<endl;
            cout<<count<<endl;
        }
};

int Demo::count = 0;


int main(){
    
    Demo obj(12);
    obj.show();

    // Demo::count = 23;

    obj.show();


    return 0;
}