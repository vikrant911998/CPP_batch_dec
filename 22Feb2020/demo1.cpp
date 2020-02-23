#include<iostream>
#include<fstream>
using namespace std;


int main(){
    fstream file;
    char name[20] = "Hello";
    string str="\nJohn Constantine";

    // file.open("./example.css",ios::out); //out mode is used to overwrite the data in the file.
    file.open("./example.css",ios::app); //app mode is used to extra data in the file

    //put is file method to write a character in the file.
    // file.put('<');
    // file.write(name,5);
    file<<str;

    file.close();
    return 0;
}