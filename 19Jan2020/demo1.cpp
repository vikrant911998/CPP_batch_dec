//Static variable get created throughout the program.
//But instance variables get created when object is created and destroyed when object is destroyed.


#include<iostream>
using namespace std;

class Student{
    
    int id;
    string name;//instance variable.
    
    public:
        static int constant; //Class variable.

        Student(string name){
            this->id = ++constant;
            this->name = name;
        }

        void show(){
            cout<<"ID = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Static Variable = "<<constant<<endl;
        }

        static void display(){
            // cout<<"ID = "<<id<<endl;
            // cout<<"Name = "<<name<<endl;
            cout<<"Static Variable = "<<constant<<endl;
        }

};


int Student::constant = 5000;


int main(){
    // cout<<"Static Variable = "<<Student::constant<<endl;

    Student obj("Vikrant"),obj1("Rahul");
    // obj.show();
    // obj1.show();
    Student::display();

   
    // cout<<"Static Variable = "<<Student::constant<<endl;

    return 0;
}