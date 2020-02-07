#include<iostream>
using namespace std;

namespace Demo{
    int a = 4;

    void show(){
        cout<<"Show of Demo Namespace"<<endl;
    }

    void display();
    
    class Employee;

    class Student{
        int id;
        public:
            Student(int id){
                this->id = id;
            }

            void show(){
                cout<<"Show inside Student Class of Demo Namespace"<<endl;
            }
    };
}

class Demo::Employee{
    public:
        static void display(){
            cout<<"Display of Class Employee of Demo Namespace"<<endl;
        }
};


void Demo::display(){
    cout<<"Display of Demo Namespace"<<endl;
}

// int main(){
//     int a = 4;
//     cout<<Demo::a<<endl;
//     Demo::show();
//     Demo::display();
//     Demo::Student obj(12);
//     obj.show();

//     Demo::Employee::display();

//     return 0;
// }