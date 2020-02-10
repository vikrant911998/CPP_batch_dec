#include<iostream>
using namespace std;

class Demo{
    int id;
    string name;
    public:
        Demo(){
            cout<<"Default Constructor Callled.."<<endl;
        }

        void input(int id){
            this->id = id;
        }
        
        void operator=(Demo &obj){
            cout<<"Assignment Operator"<<endl;
            this->id = obj.id;
        }

        void show(){
            cout<<"Id = "<<id<<endl;
        }
};

int main(){
    Demo obj,obj1;
    obj.input(101);
    obj1 = obj;
    // obj1.operator=(obj);

    obj.show();
    obj1.show();


    return 0;
}