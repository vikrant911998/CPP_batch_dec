//Dynamic Memory Allocation in Variables and Arrays.

#include<iostream>
using namespace std;

int main(){
    // void *ptr = (void *)malloc(4);
    // int *ptr = (int *)malloc(sizeof(int));
    int *ptr = new int;
    *ptr = 10;

    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    int *ptr1 = new int[5];

    for(int i=0;i<5;i++){
        *(ptr1+i) = i+20;
    }

    for(int i=0;i<5;i++){
        cout<<*(ptr1+i)<<endl;
    }



    return 0;
}