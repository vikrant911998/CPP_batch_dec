#include<iostream>
using namespace std;


class Programming{
    public:
        Programming(){
            cout<<"I Love Programming Languages"<<endl;
        }

        Programming(string s){
            cout<<"I Love "<<s<<endl;
        }
};  

int main(){

    Programming obj,obj1("CPP");

    return 0;
}