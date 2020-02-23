#include<iostream>
#include<chrono>
using namespace std;

inline void show(){
    cout<<"Inside Show Function"<<endl;
}

int main(){
    auto start = chrono::high_resolution_clock::now();
    show();
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<float> duration_time = end-start;

    cout<<duration_time.count()<<endl;

    return 0;
}