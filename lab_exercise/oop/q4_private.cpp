//Setter Getter
#include<iostream>
#include<string>
using namespace std;

class Bank{
    private:
    int balance=5000;

    public:
    void getBalance(int acc){
        if(acc == 123){
        cout << balance;
        }else{
        cout << "See your balance";
    }
    }
    
};

int main(){

    Bank a1;
    a1.getBalance(123);

    return 0;
}