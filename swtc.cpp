#include <iostream>
using namespace std;

int main(){

    char button;
    cin>>button;

    switch(button)
    {
        case 'a':
            cout<<"Hii"<<endl;
             break;
        case 'b':
             cout<<"Namaste"<<endl;
             break;
        case 'c':
             cout<<"hola"<<endl;
             break;
        case 'd':
             cout<<"ciao"<<endl;
             break;
        default:
             cout<<"I AM STILL LEARNING MORE";
             break;
    }
    return 0;   
}