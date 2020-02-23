#include<iostream>
using namespace std;

class Employee{
    int salary;
    public:
        Employee(){
         
        }
        Employee(int salary){
            this->salary = salary;
        }

        // void operator+(Employee obj){
        //     this->salary = this->salary+obj.salary;
        // }

        Employee operator+(Employee obj){
            Employee temp;
            temp.salary = this->salary+obj.salary;

            return temp;
        }

        void show(){
            cout<<"Salary = "<<salary<<endl;
        }
};

int main(){
    Employee obj1(5000);
    Employee obj2(1000);
    Employee obj3(2000);
    Employee obj4;
    obj1.show();

    // obj1.operator+(obj2);
    obj4 = obj1+obj2+obj3;

    obj4.show();


    return 0;
}

// -4
// 45-3