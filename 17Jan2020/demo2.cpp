#include<iostream>
using namespace std;

void output();

class Demo{
    private:
        int a;
        int b;

    public:
        Demo(int a, int b){
           this->a = a; 
           this->b = b;
        }

        void output();
};




int main(){

    Demo obj(23,41);
    obj.output();

    output();

    return 0;
}





//Output Function of Demo Class.
void Demo::output(){
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
}


//Global Output Function.
void output(){
    cout<<"global Output Function"<<endl;
}