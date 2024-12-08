//WAP to check it is dividble by 3 &5
#include <iostream>
using namespace std;

int divide(int a){
   
    return (a%3==0) && (a%5==0);
}

int main(){
    int num;
    cout << "Enter a number:";
    cin >> num;
    if(divide(num)){
        cout << num << " is divisible by 3 and 5" << endl;
    }
    else{
        cout << num << " is not divisible by 3 and 5" << endl;

    }
    return 0;
}