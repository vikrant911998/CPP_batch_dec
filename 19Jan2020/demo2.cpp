#include<iostream>
using namespace std;

class Student{
    int id;
    string name;

    public:
        static int constant;

        ~Student(){ //Tilde
            constant = 0;
            cout<<"Destructor Call"<<endl;
        }
        
        Student(){
            cout<<"Default Constructor Call"<<endl;
        }

        void show(){
            constant++;
            cout<<"This is Show of Class Student"<<endl;
        }


};

int Student::constant = 5000;


int main(){
    cout<<"Static variable = "<<Student::constant<<endl; // 5000.

    Student obj;
   
    obj.show();
    cout<<"Static variable = "<<Student::constant<<endl;
   
    
    return 0;
}