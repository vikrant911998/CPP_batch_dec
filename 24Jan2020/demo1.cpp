#include<iostream>
using namespace std;

class Demo{
    public:
        void add(string a){
            cout<<"String Type add function"<<endl;
        }
        void add(double d){
            cout<<"Double Type add function"<<endl;
        }
};

int main(){
    Demo obj;
    obj.add(34.45);
    obj.add("Vikrant");

    return 0;
}