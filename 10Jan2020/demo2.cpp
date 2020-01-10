#include<iostream>
using namespace std;

class Student{
    int student_id;
    string student_name;

    public:
        //Setter for student id
        void set_Student_Id(int id){
            student_id = id;
        }

        //Setter for student name
        void set_Student_Name(string name){
            student_name = name;
        }

        //getter for student id
        int get_Student_Id(){
            return student_id;
        }

        //getter for student name
        string get_Student_Name(){
            return student_name;
        }


        void show(){
            cout<<"Student ID = "<<student_id<<endl;
            cout<<"Student Name = "<<student_name<<endl;
        }

};


int main(){

    int id;
    string name;
    Student obj;

    cout<<"Enter the Student ID"<<endl;
    cin>>id;
    cout<<"Enter the Student Name"<<endl;
    cin>>name;

    obj.set_Student_Id(id);
    obj.set_Student_Name(name);

    obj.show();
    // cout<<"Student ID = "<<obj.get_Student_Id()<<endl;
    // cout<<"Student Name = "<<obj.get_Student_Name()<<endl;

    return 0;
}


// TenthClass //(class Name)->CamelCase follows from first word in the class Name
// insertData
// studentId
// //CamelCase follows from second word in the function name and variable name.