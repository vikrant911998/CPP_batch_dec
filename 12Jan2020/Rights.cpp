#include<iostream>
using namespace std;

class Rights{
    string name;
    string right;
    public:
        void setName(string n){
            name = n;
        }

        void set(string r){
            right=r;
        }

        string getName(){
            return name;
        }

        string getRight(){
            return right;
        }

};