//write a prog to print 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout << "Enter any  number:";
    cin >> n;
    while (i<=n){
        cout << i << "  ";
        i++;
    }


    return 0;
}