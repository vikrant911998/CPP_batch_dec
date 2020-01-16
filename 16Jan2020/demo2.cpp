//Function Overloading.

#include<iostream>
using namespace std;

class Demo{
    public:
        void show(){
            cout<<"Default Show Function of Class Demo"<<endl;
        }

        void show(int a){
            cout<<"One Int Argument Show Function Of Class Demo"<<endl;
        }

        void show(string s){
            cout<<"One String Argument Show Function Of Class Demo"<<endl;
        }

        void show(int a, string s){
            cout<<"Int String Argument Show Function"<<endl;
        }

        void show(string s,int a){
            cout<<"String Int Argument Show Function"<<endl;
        }
};


int main(){
    Demo obj;
    obj.show();
    obj.show(23);
    obj.show("DEMO");
    obj.show("DEMO",12);
    obj.show(12,"DEMO");

    return 0;
}