#include<iostream>
using namespace std;


class Bank{
    public:
        double show(int a){
            cout<<"Show of Class Bank"<<endl;

            return 34.5;
        }
};

class HDFC : public Bank{
    public:
        void show(){
            cout<<"Show of Class HDFC"<<endl;
            
        }
};

int main(){
    HDFC obj;
    obj.show();

    return 0;
}