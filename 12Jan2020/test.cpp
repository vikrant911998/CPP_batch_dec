#include "User.cpp"


int main(){
    
    User users[5];
    User obj,obj1;
    bool isFound = false;
    string name;

    for(int i=0;i<5;i++){
        obj.input();
        users[i]=  obj;
    }

    string userid;

    cout<<"Enter the Userid to be searched"<<endl;
    cin>>userid;

    for(int i=0;i<5;i++){
        if(userid == users[i].getUserid()){
            isFound = true;
            obj1 = users[i];
        }
    }

    if(isFound){
        cout<<endl;
        cout<<"Userid Found"<<endl;
        
        cout<<"Enter the New Name "<<endl;
        cin>>name;
        obj1.setName(name);

        cout<<endl;
        cout<<"USER DETAILS"<<endl;
        obj1.output();
    }
    else{
        cout<<"Userid Doesn't Exist"<<endl;
    }

    

    return 0;
}