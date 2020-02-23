//Namespace is used to enclose the classes and functions with same name and incase of functions(same return type and same arguments)so that they won't create error in program.
//


#include<iostream>
using namespace std;

// void show(){
//     cout<<"Show for Customer"<<endl;
// }

class Customer{
    public:
        void show(){
            cout<<"Show for Customer"<<endl;
        }
};

// class Customer{

// };

namespace Defaulter{
    
    class Customer{
        public:
            void print(){
                cout<<"Print of Defaulter Namespace "<<endl;
            }
    };
}

void show(){
    cout<<"Show of Employee"<<endl;
}

int main(){

    return 0;
}
