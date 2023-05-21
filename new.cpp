#include <iostream>
using namespace std;

int main(){

    int savings;
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Road trip with neha";
        }
        else{
            cout<<"shopping with neha";
        }
    }
    else if(savings>2000){
        cout<<"i will go with rashmi";
    }
    else{
        cout<<"i will go with my friends";
    }

    return 0;

}