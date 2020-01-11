#include<iostream>
using namespace std;

class SimpleInterest{
    int principal;
    float rate;
    int time;
    float simple;

    public:
        void input(){
            cout<<"Enter the principal ,rate, time"<<endl;
            cin>>principal>>rate>>time;
        }

        void si(){
            simple = (principal*rate*time)/100;
            
        }

        float getSimple(){
            return simple;
        }

};

int main(){
    SimpleInterest obj;
    obj.input();
    obj.si();

    obj.getSimple()*5;


    return 0;
}