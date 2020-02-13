#include<iostream>
using namespace std;


template<class T>
class Demo{
    T *a;
    int capacity;
    int current;

    public:
        Demo(int capacity){
            this->capacity = capacity;
            this->current = -1;
            a = new T[capacity];
        }

        void insert(T value){
            if(capacity-1 == current){
                cout<<"Array is FUll"<<endl;
                return ;
            }
            current++;
            a[current] = value;
        }

        void display(){
            cout<<"Array Elements are :"<<endl;
            for(int i=0;i<=current;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Demo<int> obj(10);
    obj.insert(100);
    obj.insert(200);
    obj.insert(300);
    obj.display();


    Demo<string> obj1(5);
    obj1.insert("Ram");
    obj1.insert("Hello");
    obj1.insert("Computer");
    obj1.display();


    return 0;
}