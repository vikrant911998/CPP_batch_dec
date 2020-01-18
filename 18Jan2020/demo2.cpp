//Operator Overloading -> It can be defined as to change the predefined functionality of a operator.

#include<iostream>
using namespace std;

class Student{
    int marks1,marks2;

    public:
        Student(int m1,int m2){
            marks1= m1;
            marks2 = m2;
        }
        void printTotal(){
            cout<<(marks1+marks2)<<endl;
        }

        void operator+(){
            cout<<(marks1+marks2)<<endl;
        }
        
        void operator++(){
            marks1++;
            marks2++;
            cout<<marks1<<"  "<<marks2<<endl;
        }
};

int main(){
    Student obj(23,45);

    // +obj;   //->68
    // obj.printTotal();
    // obj.operator+();
    // 23+45 = 68
    +obj;
    ++obj;

    return 0;
}