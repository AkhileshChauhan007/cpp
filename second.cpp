//Second Quetion.
//Linear Search With Input -->

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int key;
    cin>>key;

    for(int i=1;i<=n;i++){
        if(a[i]==key)
            cout<<i;
    }

    return 0;

}