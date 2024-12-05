#include<iostream>
using namespace std;
 int main(){
	int num,i,sum;
	int ft=0;
	int st=1;
	
	cout << "Enter any number:";
	cin >> num;
	
	cout << ft << " " << st << " ";
	
	for(i=0;i<=num;i++){
		sum=ft+st;
		cout << sum << " ";
		ft=st;
		st=sum;
	}
}
