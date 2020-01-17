#include<iostream>
using namespace std;

class Student{
    int roll_no;
    int sub1,sub2,sub3;

    public:
        void input(){
            cout<<"Enter the Roll NO"<<endl;
            cin>>roll_no;

            cout<<"Enter the Marks of Three subjects"<<endl;
            cin>>sub1>>sub2>>sub3;
        }

        void output(){
            cout<<"Roll No = "<<roll_no<<endl;
            cout<<"Average = "<<(sub1+sub2+sub3)/3<<endl; 
        }
};


int main(){
    Student arr[3];

    Student s1;

    for(int i=0;i<3;i++){
        s1.input();
        arr[i] = s1;
    }

    
    for(int i=0;i<3;i++){
        arr[i].output();
    }
    

    return 0;
}