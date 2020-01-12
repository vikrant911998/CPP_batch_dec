#include<iostream>
using namespace std;

class Student{
    int sid;
    string sname;
    public:

        void input(){
            cout<<"Enter the Id and Name"<<endl;
            cin>>sid>>sname;
        }

        void output(){
            cout<<"Id = "<<sid<<" and Name = "<<sname<<endl;
        }

        

};


int main(){
    Student s[5];
    Student obj;

    for(int i=0;i<2;i++){
        
        obj.input();
        s[i] = obj;
    }

    for(int i=0;i<2;i++){
        s[i].output();
    }


    return 0;
}