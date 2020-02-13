#include<iostream>
using namespace std;

class A;
// class B;
class B{
    public:
        void extract(A);
};

class A{
    int id;
    public:
        A(int id){
            this->id = id;
        }

        friend class B;
};

void B::extract(A obj){
    cout<<"Id = "<<obj.id<<endl;
}



int main(){
    A obj(101);
    B obj2;
    obj2.extract(obj);

    return 0;
}