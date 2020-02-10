#include<iostream>
using namespace std;

class Demo{
    int id;
    string name;
    public:
        Demo(){
            cout<<"Default Constructor Callled.."<<endl;
        }
        Demo(Demo &obj){
            cout<<"Copy Constructor Called.."<<endl;
        }
        void operator=(Demo &obj){
            cout<<"Equal Operator"<<endl;
        }
};

int main(){
    // Demo obj,obj1(obj);
    // Demo obj,obj1 = obj;
    Demo obj,obj1;

    obj1 = obj;


    return 0;
}