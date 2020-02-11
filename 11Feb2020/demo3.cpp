#include<iostream>
using namespace std;

template<class T>
class Demo{
    T data;
    public:
        Demo(T data){
            this->data = data;
        }

        void show(){
            cout<<data<<endl;
        }
};

int main(){
    Demo<string> obj("Vikrant");
    obj.show();

    return 0;
}