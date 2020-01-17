#include<iostream>
using namespace std;

class Demo{
    private:
        int a;
        int b;

    public:
        Demo(int a, int b){
           this->a = a; 
           this->b = b;
        }

        void output(){
            cout<<"A = "<<a<<endl;
            cout<<"B = "<<b<<endl;
        }
};



int main(){

    Demo obj(23,41);
    obj.output();


    return 0;
}
