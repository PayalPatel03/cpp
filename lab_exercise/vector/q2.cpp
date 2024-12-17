#include<iostream>
using namespace std;
#include<vector>
int main(){

    vector <int> v1;

    v1.push_back(12);
    v1.push_back(42);
    v1.push_back(90);

    cout << v1.at(0) << endl;

    v1.pop_back();

    v1.clear();

    cout << v1.size() << endl;
    cout << v1.empty() << endl;

    return 0;
}