#include <iostream> 
using namespace std; 

int main() 
{ 
    static int i ; // 0 
    for ( i++ ; ++i ;; ) { 

        cout<<i<<endl;
        
        if (i == 6) 
            break; 

    } 


    return 0; 
} 