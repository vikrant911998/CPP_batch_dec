//Dynamic Memory Allocation in Objects.
#include<iostream>
using namespace std;


class Demo{
    int id;
    public:
        Demo(int id){
            this->id = id;
        }

        void show(){
            cout<<"ID = "<<id<<endl;
        }
};

int main(){
    Demo obj(12);
    obj.show();

    Demo *ptr = new Demo(4567);
    ptr->show();



    return 0;
}