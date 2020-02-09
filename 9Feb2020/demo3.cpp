//Passing Object Inside a Function.

#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        Student(string name){
            this->name = name;
        }
};

class Display{
    int id;
    public:
        Display(int id){
            this->id = id;
        }
        static void show(Display obj){
            cout<<"Id = "<<obj.id<<endl;
        }

        static void show1(Student obj){
            cout<<"Student Name = "<<obj.name<<endl;
        }
};

int main(){
    Display demo(101);
    Student demo1("Ram");
    // demo.show(demo);

    Display::show(demo);
    Display::show1(demo1);

    return 0;
}