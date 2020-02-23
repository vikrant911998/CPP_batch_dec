#include<iostream>
using namespace std;

class Demo{
    int a;
    public:
        Demo(int data){
            a = data;
        }
        // a = 4;
        // -a = -4;
        void operator-(){
            a = -a;
        }

        void show(){
            cout<<"A = "<<a<<endl;
        }
};

int main(){
    Demo obj(10);
    obj.show();

    // obj.operator-();
    -obj;
    obj.show();

    return 0 ;
}


// 3-4
// -4
// -obj

// 4+5
// obj1+obj2
// obj1+obj2+obj3+obj4+obj5