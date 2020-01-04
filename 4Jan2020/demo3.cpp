#include<iostream>
using namespace std;

int main(){
    char c = 'Z';

    switch(c = 'I'){
        
            // break;
        case 'A':cout<<"Vowel A"<<endl;
            break;
        case 'E':cout<<"Vowel E"<<endl;
            break;
        case 'I':cout<<"Vowel I"<<endl;
            break;
        default:cout<<"Consonant"<<endl;

        case 'O':cout<<"Vowel O"<<endl;
            break;
        case 'U':cout<<"Vowel U"<<endl;
            break;
        
    }

    return 0;
}