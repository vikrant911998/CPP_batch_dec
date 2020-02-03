#include<iostream>
using namespace std;

template<class T>

class DynamicArray{

    T arr[10];
    
    public:
        DynamicArray(T data){
            arr[0] = data;
        }

        void print(){
            for(T item : arr){
                cout<<item<<" ";
            }
            cout<<endl;
        }
};

int main(){
    DynamicArray<string> obj("Hello");
    obj.print();

    return 0;
}

