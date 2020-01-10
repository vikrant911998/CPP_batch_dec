#include<iostream>
using namespace std;

class Student{
    //instance variable,data members,properties,member variables.
    int id;
    string name;
    string address;

    public:

        //Getters and Setters
        //Single Value Initalization
        void setId(int i){
            id = i;
        }

        //Single value retrieval
        int getId(){
            return id;
        }

        void setName(string n){
            name = n;
        }

        string getName(){
            return name;
        }

        void setAddress(string a){ //parameter(formal arguments).
            address = a;
        }

        string getAddress(){
            return address;
        }
        
};



int main(){
    Student obj;
    // obj.setId(101); //101 -> arguments or actual arguments.


    int id;
    cout<<"Enter the Student Id"<<endl;
    cin>>id;
    obj.setId(id);

    cout<<"Student ID = "<<obj.getId()<<endl;

    return 0;
}