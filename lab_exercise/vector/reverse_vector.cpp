#include<iostream>
#include<vector>
using namespace std;
int main(){
    //original vector
    vector<int> v={23,12,34,32,56};
    int n=v.size();
    vector <int> vr(5);
    cout << "Original vector is:" << endl;
    for(int i=0;i<=n-1;i++){
        cout << v[i] << "  ";
    }
    cout << endl;

    //reversing of vector
    cout << "Reverse vector is:" << endl;
    
   for(int i=0;i<v.size();i++){
    n--;
    vr[i]=v[n];
    cout << vr[i] << "  ";
   }
   cout << endl;
    return 0;
}