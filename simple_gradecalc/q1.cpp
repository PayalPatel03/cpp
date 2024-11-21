#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3;
    int total;
    char grade;
    float avg;

    cout << "Enter your score of first subject:" << endl;
    cin >> m1;
    cout << "Enter your score of second subject:" << endl;
    cin >> m2;
    cout << "Enter your score of third subject:" << endl;
    cin >> m3;

    total=m1+m2+m3;
    cout << "Total is :" << total << endl ;

    avg = total / 3;
    cout << "Average is :" << avg << endl;

    //USing ternary operator

       if(total <300){
         grade = avg >= 90 ? 'A' : avg >= 80 ? 'B' : avg >= 70 ? 'C' : avg >= 60 ? 'D' : 'F';

        cout << "Your garde is " << grade;
       }    

    //Applying switch case

    switch(grade){
        case 'A' : cout << ".Excellent work!!" ;
        break;
        case 'B' : cout << ".Well done!!";
        break;
        case 'C' : cout << ".Good Job" ;
        break;
        case 'D' : cout << ".You are passed, but you could do better." ;
        break;
        default : cout << ".You have failed the examination" ;
    }
    
    // Eligiblity criteria 

    if((grade == 'A') || (grade == 'B') || (grade == 'C') || (grade == 'D')){
        cout << "Congratulations! You are eligible for the next level" << endl;
    }
    else{
        cout << "Plese try again next time" ;
    }
}