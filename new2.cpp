#include <iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    int b;
    cin>>b;

    int c;
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is greater\n";
        }
        else{
            cout<<c<<" is greater\n";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greater\n";
        }
        else{
            cout<<c<<" is greater\n";
        }
    }

    return 0;

}