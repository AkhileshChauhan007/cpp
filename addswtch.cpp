#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter the equation: ";
    cin>>a;

    char op;
    cin>>op;

    int b;
    cin>>b;

    switch(op){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;
    }


    return 0;

}