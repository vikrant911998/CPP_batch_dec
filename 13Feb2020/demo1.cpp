#include<iostream>
using namespace std;

class Demo{
    int *a;
    int currentIndex;
    int capacity;

    public:
        Demo(int capacity){
            this->capacity = capacity;
            a = new int[capacity];
            currentIndex = -1;
        }

        void insert(int value){
            if( currentIndex == capacity-1 ){
                cout<<"Array is Full"<<endl;
                return;
            }

            currentIndex++;
            a[ currentIndex ] = value;
        }

        void display(){
            cout<<"Array Elements are :"<<endl;
            for(int i=0;i<=currentIndex;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

};


int main(){
    Demo obj(10);
    obj.insert(100);
    obj.insert(200);
    obj.insert(300);
    obj.display();

    return 0;
}