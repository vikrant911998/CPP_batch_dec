//Constructor Chaining.

#include<iostream>
using namespace std;

class Bank{

    public:
        Bank(){
            cout<<"Default Constructor "<<endl;
        }
        Bank(int a){
            cout<<"Parameterised Constructor"<<endl;
        }
};

class HDFC : public Bank{
    public:
        HDFC(){
            cout<<"HDFC class Default Constructor"<<endl;
        }

        HDFC(int a){
            cout<<"HDFC class Parameterised Constructor"<<endl;
        }
        
};

int main(){
    HDFC obj(23),obj1;

    return 0;
}


//The constructor of Child Class whether it is default one or parameterised one will call the Default Constructor of Parent Class.


//If you want to call the Parameterised of Parent Class then you will have to specify explicitly.