#include<iostream>
using namespace std;

class Demo{

    public:
        inline void show(){
            cout<<"Show of Class Demo"<<endl;
        }
};

int main(){
    Demo obj;
    obj.show();

    return 0;
}