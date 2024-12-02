#include<iostream>
using namespace std;

int main(){
    int size,i,len=0;
    cout<<"Enter array size : ";
    cin>>size;
    int ar[size];

    for(i=0;i<size;i++){
        cout<<"ar["<<i<<"] = ";
        cin>>ar[i];
        len++;
    }

    cout<<"Length of array is : "<<len;
}