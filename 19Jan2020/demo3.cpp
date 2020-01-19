//Need of Inheritance ->Code Reusability, Enhancement in features or properties.

//SOLID 
//S-> SRP(Single Responsibility Principle).
//D-> DRY(Do not Repeat Yourself).

#include<iostream>
using namespace std;

class Bank{
    int accNo;
    string name;

};


class HDFC : public Bank{
    
};

class SBI{
    
};