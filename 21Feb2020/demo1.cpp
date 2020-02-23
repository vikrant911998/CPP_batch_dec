#include <iostream> 
using namespace std; 
int fun(); 


int main() 
{ 
    for (fun(); fun(); fun()) { 
        cout<<fun()<<endl;
    } 

    // cout<<fun()<<endl;
    return 0; 
} 

int fun() 
{ 
    int static num = 10; 
    return --num; 

} 