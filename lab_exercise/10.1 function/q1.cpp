//to find cube with UDF
#include <iostream>
using namespace std;

int cube(int a){
    return a*a*a;
}

int main(){
    int num;
    cout << "Enter a number";
    cin >> num;
    cout << "The cube of " << num << " is " << cube(num) << endl;
    return 0;

}