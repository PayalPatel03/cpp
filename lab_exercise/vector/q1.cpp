#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1; //empty vector

    vector<int> v2(5,90); //initialized with default size and element

    vector<int> v3{23,45,67,23,11};

    cout<< v3[0] << endl;
    cout<< v3[1] << endl;
    cout<< v3[2] << endl;
    cout<< v3[3] << endl;
    cout<< v3[4] << endl;

    return 0;
}