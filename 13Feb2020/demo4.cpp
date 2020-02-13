
#include<iostream>
using namespace std;

class Employee;

class Demo{
    public:
        void display(Employee);
};

class Employee{
    int id;
    string name;
    
    public:
        Employee(int id,string name){
            this->id = id;
            this->name = name;
        }
        friend void Demo::display(Employee);
};  


void Demo::display(Employee obj){
    cout<<"Id = "<<obj.id<<endl;
    cout<<"Name = "<<obj.name<<endl;
}


int main(){
    Employee obj(101,"Vikrant");
    Demo obj1;
    obj1.display(obj);

    return 0;
}