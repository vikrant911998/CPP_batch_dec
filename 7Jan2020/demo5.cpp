#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        void input(int l, int b){
            if(l>0 && b>0){
                length = l;
                breadth = b;
            }
            else{
                cout<<"Invalid Statement"<<endl;
                return;
            }
        }

        void area(){
            cout<<"Area = "<<(length*breadth)<<endl;
        }

        void perimeter(){
            cout<<"Perimeter = "<<2*(length+breadth)<<endl;
        }
};


int main(){
    int l,b,c;
    // Rectangle obj;

    cout<<"Enter the length and breadth"<<endl;
    cin>>l>>b>>c;

    // obj.input(l,b);
    // obj.area();
    // obj.perimeter();

    if(l==b==c){
        cout<<"EQUI"<<endl;
    }

    return 0;
}