#include<iostream>
using namespace std;

class Employee{
    string id;
    int age;
    string company;
    static int count;
    //dynamic array(string) -> companies
    //map-> (company_name , count)
    public:

    Employee(int age,string company){
        // call function assigning id
        this->age = age;
        this->company = company;
        this->id = company + to_string(age) + to_string(count);
        
        count++;
    }

    void assign(age,company_name){
        //search company_name in dynamic array, if exists then ok otherwise add company_name in dynamic array.

        

    }

    void show(){
        cout<<id<<endl;
    }

};

int Employee :: count = 1;


int main(){
    Employee obj1(23,"HCL");
    Employee obj2(31,"HCL");
    Employee obj3(29,"HCL");
    Employee obj4(35,"HCL");
    Employee obj5(24,"HCL");
    Employee obj6(23,"HCL");

    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    obj5.show();
    obj6.show();


    return 0;
}