#include <iostream>
using namespace std;

class Account{
public:
    virtual void calculateInterest(){
        cout << "Calculating Interest" << endl;
    }
};
class SavingsAccount : public Account{
    float balance;
    float rate;
public:
    SavingsAccount(float b, float r){
        balance = b;
        rate = r;
    }
    void calculateInterest(){
        float interest = (balance * rate) / 100;
        cout << "Interest = " << interest << endl;
        cout << "Final Balance = " << balance + interest << endl;
    }
};
class CurrentAccount : public Account{
    float balance;
public:
    CurrentAccount(float b){
        balance = b;
    }
    void calculateInterest(){
        cout << "Interest = 0" << endl;
        cout << "Final Balance = " << balance << endl;
    }
};
class FixedDepositAccount : public Account{
    float balance;
    float rate;
public:
    FixedDepositAccount(float b, float r){
        balance = b;
        rate = r;
    }
    void calculateInterest(){
        float interest = (balance * rate) / 100;
        cout << "Interest = " << interest << endl;
        cout << "Final Balance = " << balance + interest << endl;
    }
};

int main(){
    int choice;
    float balance, rate;
    cout << "1. Savings Account" << endl;
    cout << "2. Current Account" << endl;
    cout << "3. Fixed Deposit Account" << endl;
    cout << "Enter Account Type: ";
    cin >> choice;
    cout << "Enter Balance: ";
    cin >> balance;
    Account *a;
    if (choice == 1){
        cout << "Enter Interest Rate: ";
        cin >> rate;
        SavingsAccount s(balance, rate);
        a = &s;
        a->calculateInterest();
    }
    else if (choice == 2){
        CurrentAccount c(balance);
        a = &c;
        a->calculateInterest();
    }
    else if (choice == 3){
        cout << "Enter Interest Rate: ";
        cin >> rate;
        FixedDepositAccount f(balance, rate);
        a = &f;
        a->calculateInterest();
    }
    else{
        cout << "Invalid Account Type" << endl;
    }
    return 0;
}