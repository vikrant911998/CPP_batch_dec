#include<iostream>
using namespace std;

class Member{
    string name;
    int age;
    long phone;
    string address;
    double salary;

    public:
        void input(){
            cout<<"Enter the name"<<endl;
            cin>>name;
            cout<<"Enter the Age"<<endl;
            cin>>age;
            cout<<"Enter the Phone"<<endl;
            cin>>phone;
            cout<<"Enter the Address"<<endl;
            cin>>address;
            cout<<"Enter the Salary"<<endl;
            cin>>salary;
        }

        void output(){
            cout<<"Name = "<<name<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Phone = "<<phone<<endl;
            cout<<"Address = "<<address<<endl;
        }

        void printSalary(){
            cout<<"Salary = "<<salary<<endl;
        }
};


class Manager: public Member{
    string specialization;
    string department;

    public:
        Manager(string specialization, string department){
            this->department = department;
            this->specialization = specialization;
        }

        void show(){
            cout<<"Department  = "<<department<<endl;
            cout<<"Specialization = "<<specialization<<endl;
        }

};

int main(){
    Manager obj("Human Resource","Accouting");
    obj.input();
    obj.output();
    obj.printSalary();
    obj.show();

    return 0;
}