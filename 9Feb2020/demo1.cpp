#include<iostream>
using namespace std;

class Marks{
    protected:
        int rollnumber;
        string name;
        double marks;
    public:

};

class Physics : public Marks{
    public:
        Physics() : Marks(){

        }
    
};


int main(){


    return 0;
}