#include<iostream>
using namespace std;

class Student{
    
    public:
        int id;
        string name;
        
        Student(int id,string name){
            this->id = id;
            this->name = name;
        }

};

class Display{
    public:
        void show(Student);
};

void Display::show(Student s){
    cout<<"Id = "<<s.id<<endl;
    cout<<"Name = "<<s.name<<endl;
}


int main(){

    Student obj(102,"Vikrant");

    Display obj1;
    obj1.show(obj);

    return 0;
}