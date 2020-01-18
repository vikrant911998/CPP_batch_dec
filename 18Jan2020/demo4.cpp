#include<iostream>
using namespace std;

class Student{
    
    int id;
    string name;//instance variable.(they get memory when object is created.)
    
    public:
        static int constant; //Class variable.(they get memory when class is registered.)

};

//Initializing static variable declared inside the Student Class.
int Student::constant = 5000;


int main(){

   
    cout<<"Static Variable = "<<Student::constant<<endl;

    return 0;
}