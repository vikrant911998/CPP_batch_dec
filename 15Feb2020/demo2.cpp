#include<iostream>
using namespace std;

int main(){
    int id;

    cout<<"Enter the Id"<<endl;
    cin>>id;

    while(true){
        try{
            if(id<0){
                throw id;
            }
            else{
                cout<<"Id = "<<id<<endl;
                break;
            }    
            cout<<"After throw"<<endl;  
        }
        // catch(int ex){
        //     cout<<"Invalid Id Input "<<ex<<endl;
        //     cout<<"Try Again"<<endl;
        //     cin>>id;
        // }
        catch(...){
            cout<<"Invalid Id Input "<<endl;
            cout<<"Try Again"<<endl;
            cin>>id;
        }


    }



    return 0;
}