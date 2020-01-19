#include<iostream>
using namespace std;

//Parent Class or Super Class.
class Bank{

    public:
        int accountNumber;
        string name;
        string address;
        long mobile;

        void show(){
            cout<<"Show of Class Bank"<<endl;
        }

};

class HDFC : public Bank{
    public:
        string giftVoucher;

};

int main(){ 
    //this HDFC object will get instance properties from both classes HDFC and Bank.
    
    HDFC obj; //obj->name,accountNumber,address,mobile,giftVoucher.
    obj.show();
    

    return 0;
}