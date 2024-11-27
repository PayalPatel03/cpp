//min number out of 3 using ternary
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int min;
    cout << "Enter first number:";
    cin >> a;
     cout << "Enter second number:";
    cin >> b;
     cout << "Enter third number:";
    cin >> c;
      min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    cout << "The minimum of the three numbers is: " << min << endl;
    
 return 0;
}