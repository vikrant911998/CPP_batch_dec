#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    char c;
    string str;
    char chars[20];

    file.open("example.css",ios::in);

    // getline(file,str);
    // cout<<str<<endl;
    

    // getline(cin,str);

    // file.get(c);
    // cout<<c<<endl;

    // file.get(c);
    // cout<<c<<endl;

    // file.get(c);
    // cout<<c<<endl;

    file.close();
    return 0;
}

