//SOLID
//S->SRP -> Single Responsibility Principle.

#include<iostream>
using namespace std;

class Student{
    private:
        int studentID;
        string name;
        string address;

    public:
        

        void input(){
            int id;
            cout<<"Enter the StudentID"<<endl;
            cin>>id;
            if(id > 0){
                studentID = id;
            }
            else{
                cout<<"Invalid ID Assignment"<<endl;
                return ;
            }
            // cin>>studentID;

            cout<<"Enter the Student Name"<<endl;
            cin>>name;
            cout<<"Enter the Student Address"<<endl;
            cin>>address;
            
        }

        void output(){
            cout<<"Student ID = "<<studentID<<endl;
            cout<<"Student Name = "<<name<<endl;
            cout<<"Student Address = "<<address<<endl;
        }
        
}; 


int main(){
    Student obj,obj1;

    obj.input();
    // obj.studentID = -12345;
    obj.output();
   

    return 0;
}
