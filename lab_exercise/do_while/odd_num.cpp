//WAP to print odd numbers from N to 1
#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout << "Enter any number:";
//     cin >> n;
//     for(int i=n;i>=1;i--){
//         if(i%2 !=0){
//             cout << i<< "   ";
//         }
//     }
//     return 0; 
// }

// int main(){
//     int n;
//     cout << "Enter any number";
//     cin >> n;
//     do{
//         if(n%2==0){
//             cout << n << " ";
//         }
//         n--;    
//     }
//     while(n>=1);



// }

int main(){
    int n,i=2;
    cout << "Enter any numver";
    cin >> n;
    do
    {
        if(i%2==0){
            cout << i << " ";
        }i++;
    } while (i<=n);
    
}