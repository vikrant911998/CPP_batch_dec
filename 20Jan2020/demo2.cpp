//Single Inheritance
#include<iostream>
using namespace std;

//Call By References
void swap(int *a, int *b){ //a
    int temp = *a; //10
    *a = *b; //20
    *b = temp; // 10

    cout<<"Inside Swap Function ";
    cout<<"A = "<< *a<<" and B = "<< *b<<endl;
}

int main(){
    int a = 10,b = 20;
    swap(&a,&b);

    cout<<"A = "<<a<<" and B = "<<b<<endl;

    return 0;
}


// int a = 20;
// int *ptr = &a;

// a = 20
// *ptr = 20

// &a = ptr
