#include<iostream>
#include<stdio.h>
using namespace std;

//Array Variable holds the initial or base address(which is the address of the first element of the array).

int main(){
    int a[5][5][3] = { { {1,2,3} , {} , {} } , {},{},{},{} }
    int a[5] = {1,2,3,4,5}; // (1200,1204,1208)
    printf("%d\n",a);
    // cout<<a<<endl;
    cout<<a[0]<<endl;

    return 0;
}