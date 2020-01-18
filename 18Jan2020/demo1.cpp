#include<iostream>
using namespace std;

class Student{
    double height;
    public:
        void input(){
            cout<<"Enter the height"<<endl;
            cin>>height;
        }

        double get_Height(){
            return height;
        }
};



int main(){
    int num;

    cout<<"Enter the Number of Students"<<endl;
    cin>>num;

    Student s[num];
    Student obj;

    for(int i=0;i<num;i++){
        obj.input();
        s[i] = obj;
    }

    int totalHeight = 0;
    
    for(int i=0;i<num ;i++){
        totalHeight += s[i].get_Height();
    }

    cout<<"Average Height = "<<(totalHeight/num)<<endl;

    return 0;
}