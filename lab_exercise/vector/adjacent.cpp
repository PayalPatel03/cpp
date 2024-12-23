#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v1={1,-8,5,8,2,6};
    int n=v1.size();
    vector<int> ans;

    cout << "Vector is.." ;
    
    for(int i=0;i<v1.size();i++){
        cout << v1[i] << "  ";
    }
    cout << endl;

    for(int i=1;i<n-i;i++){
        if(v1[i] < v1[i-1] && v1[i] < v1[i+1] ){
            ans.push_back(v1[i]);
        }
    }
    
    cout << "Smallest element is: ";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
