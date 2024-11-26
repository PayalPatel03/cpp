#include<iostream>
using namespace std;
int main(){
	//1 2 3 4 5 5 4 3 2 1
	//1 2 3 4     4 3 2 1
	//1 2 3         3 2 1
	//1 2             2 1
	//1                 1 
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			cout << j;  
		}

		for(k=i;k<5;k++){
			cout << "  ";
		}
		for(j=5;j<=5;j--){
			cout << j;
		}
		cout << endl;
	}
}