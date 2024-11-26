//WAP to print odd numbers from N to 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number:";
    cin >> n;
    for(int i=n;i>=1;i--){
        if(i%2 !=0){
            cout << i<< "   ";
        }
    }
    return 0;
}