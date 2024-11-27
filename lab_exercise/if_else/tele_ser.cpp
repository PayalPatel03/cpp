#include<iostream>
using namespace std;
int main(){
  

  int SelectLanguage , Selectrechargepack;
  cout << "Press 1 for English" << endl;
  cout << "Press 2 for Hindi" << endl;
  cout << "Press 3 for Gujarati" << endl;

  cout << "Please Select the Language:";

  cin >> SelectLanguage;

  switch(SelectLanguage){

    case 1:
      cout << endl << "(english)" << endl;

      cout << "Press 1 for internet recharge" << endl << "Press 2 for Top-up recharge"  << endl << "Press 3 for Special Recharge" << endl;
      break;

    case 2:
      cout << endl << "(hindi)" << endl;

      cout << "Internet recharge ke liye 1 dabiye" << endl << "Top-up recharge ke liye 2 dabiye"  << endl << "Special Recharge ke liye 3 dabiye" << endl;
      break;

    case 3:
      cout << endl << "(gujarati)" << endl;

      cout << "Internet recharge mate 1 dabavo" << endl << "Top-up recharge mate 2 dabavo"  << endl << "Special Recharge mate 3 dabavo" << endl;
      break;
      break;

    default:
     cout << "No language selected." << endl;
     break;
  }


 cout << "Please select the recharge pack:" << endl;

  cin >> Selectrechargepack;

  switch(Selectrechargepack){

    case 1:
     cout << "You have select the internet recharge pack" << endl;
      break;

    case 2:
     cout << "You have select the  top up pack" << endl;
    
      break;

    case 3:
     cout << "You have select the  special pack" << endl;
      break;

    default:
     printf("No package is selected");
  }



}