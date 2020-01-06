#include<iostream>
using namespace std;

int main(){
    int a[5] = {12,99,52,34,61};
    int count = 0;

    for(int i=0;i<5;i++){

        if(a[i] %2 == 0){
            // cout<<"Number = "<<a[i]<<endl;
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}