#include<iostream>
using namespace std;

class User{
    string name;
    string userid;

    public:
        void input(){
            cout<<"Enter the Name and Userid"<<endl;
            cin>>name>>userid;
        }

        void output(){

            cout<<"Name = "<<name<<" and Userid = "<<userid<<endl;
        }

        void setName(string n){
            name = n;
        }

        void setUserid(string u){
            userid = u;
        }

        string getName(){
            return name;
        }

        string getUserid(){
            return userid;
        }

};