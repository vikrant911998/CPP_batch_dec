#include<iostream>
using namespace std;

class Employee{
    int emp_Id;
    string emp_Name;

    public:
        void input(){
            cout<<"Enter the ID"<<endl;
            cin>>emp_Id;
            cout<<"Enter the Name"<<endl;
            cin>>emp_Name;
        }

        void output(){
            cout<<"ID = "<<emp_Id<<endl;
            cout<<"Name = "<<emp_Name<<endl;
        }

        void setId(int id){
            emp_Id = id;
        }

        void setName(string name){
            emp_Name = name;
        }

        int getId(){
            return emp_Id;
        }

        string getName(){
            return emp_Name;
        }

};

// int main(){
//     Employee obj;
    
//     obj.input();
//     obj.output();

//     obj.setId(1001);
//     obj.output();




//     return 0;
// }