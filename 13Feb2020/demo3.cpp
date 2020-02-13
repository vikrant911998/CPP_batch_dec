//Friend Function
//It can be declared anywhere inside the class.(private,protected, public).
//Friend Function are only declared inside the class.

#include<iostream>
using namespace std;

class Employee{
    int id;
    string name;
    friend void display(Employee);
    
    public:
        Employee(int id,string name){
            this->id = id;
            this->name = name;
        }
        // friend void display(Employee);
};  

void display(Employee obj){
    cout<<"Id = "<<obj.id<<endl;
    cout<<"Name = "<<obj.name<<endl;
}

int main(){
    Employee obj(101,"Vikrant");
    display(obj);

    return 0;
}