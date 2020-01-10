//Constructor Overloading.
//1.Different No of Parameters.
//2.Type of Parameters.
//3.Sequence of Parameters.


#include<iostream>
using namespace std;

class Student{
    int student_id;
    string student_name;
    
    public:
        //default constructor
        Student(){
            cout<<"Default Constructor"<<endl;
            student_id = 0;
            student_name = "";
        }

        Student(double id){
            cout<<"FLoat Id Constructor"<<endl;
            student_id = id;
        }

        Student(int id){
            cout<<"Int Parameter Constructor "<<endl;
            student_id = id;
        }

        Student(int id,string name){
            cout<<"Parameter Constructor "<<endl;
            student_id = id;
            student_name = name;
        }

        Student(string name,int id){
            cout<<"Sequence Parameter Constructor "<<endl;
            student_id = id;
            student_name = name;
        }
        

};

int main(){

    Student obj, obj1(101), obj2(102.23), obj3(201,"RAM"), obj4("SHYAM",202);

    return 0;
}


//points
// 1.Compiler creates a default constructor on it's own when no constructor has been created inside the class.
// 2.Compiler will not create any constructor if even a single constructor has been created inside the class.

// 3.Constructor Overloading can be defined as the process when two or more constructors have been created inside the class and these constructor are differentiated by no. of arguments,type of arguments,sequence of arguments.

