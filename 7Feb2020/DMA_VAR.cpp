//DMA(Dynamic Memory Allocation in  Variables).

#include<iostream>
using namespace std;

int main(){
    int a = 2;

    int *ptr = (int *)malloc(sizeof(int));
    int *p = new int;

    *p = 2345;

    cout<<*p<<endl;

    return 0;
}