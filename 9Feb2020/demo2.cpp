//Has-A  relation Between Classes.

#include<iostream>
using namespace std;

class Subject{
    int s1;
    int s2;
    int s3;
    public:
        void setMarks(int s1,int s2,int s3){
            this->s1 = s1;
            this->s2 = s2;
            this->s3 = s3;
        }

        void display(){
            cout<<"Subject 1 = "<<s1<<endl;
            cout<<"Subject 2 = "<<s2<<endl;
            cout<<"Subject 3 = "<<s3<<endl;
        }
};

class Student{
    string rollNo;
    string name;
    Subject subject;
    static string className;

    public:
       Student(string name,int rollNo,int s1,int s2,int s3){
           this->name = name;
           this->rollNo = className + to_string(rollNo);
           subject.setMarks(s1,s2,s3);
       } 

       void show(){
           cout<<"Name = "<<name<<endl;
           cout<<"RollNo = "<<rollNo<<endl;
           subject.display();
       }
};

string Student::className = "Tenth";

int main(){
    Student obj("VIkrant",10203,34,45,67);
    obj.show();

    return 0;
}