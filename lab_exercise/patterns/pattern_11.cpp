//     1 0 1 0 1 
	//   0 1 0 1  
	//     1 0 1   
	//       0 1   
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
			if(j % 2 ==0){
				cout << 0;
			}
			else{
				cout << 1;
			}
		}
		cout << endl;
	}
}
