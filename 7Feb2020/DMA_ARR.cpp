//DMA(Dynamic Memory Allocation in  Arrays).

#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int num= 5;

    int *ptr = (int *)calloc(num,sizeof(int));
    int *p = new int[num]; //[ ,,,,,]

    *(p+0) = 100;
    *(p+1) = 200;
    *(p+2) = 300;
    *(p+3) = 400;
    *(p+4) = 500;

    cout<<*(p+2)<<endl;

    return 0;
}