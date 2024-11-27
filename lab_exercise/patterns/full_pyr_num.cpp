/*           1 
          1  2  2
       1  2  3  2  1
    1  2  3  4  3  2  1
 1  2  3  4  5  4  3  2  1
  
*/
#include<iostream>
using namespace std;
int main(){
       int rows = 5; 

    for (int i = 1; i <= rows; i++) {
        
        for (int j = i; j < rows; j++) {
            cout << "  "; 
        }
        
      
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
      
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        
       
        cout << endl;
    }

    return 0;
}

