//     5 4 3 2 1
	//   4 3 2 1
	//     3 2 1
	//       2 1
	//         1
#include<iostream>
using namespace std;

int main(){
	
	int i,j,k;
	for(i=5;i>=1;i--){
		for(k=i;k<5;k++){
			cout << "  ";
		}
		for(j=i;j>=1;j--){
			cout << j;
            cout << " ";
		}
		cout << endl;
	}
}