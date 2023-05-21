//sorting in an array 
//selection sort

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int small;

    for(int i=0;i<n-1;i++){
        small = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small])
                small = j;
                int temp;
                temp = arr[small];
                arr[small] = arr[i];
                arr[i] = temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}