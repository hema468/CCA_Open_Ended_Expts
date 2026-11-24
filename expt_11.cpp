#include <iostream>
using namespace std;

class InsufficientBalanceException{
public:
    const char* what(){
        return "Insufficient balance.";
    }
};
class BankAccount{
    float balance;
public:
    BankAccount(float b){
        balance = b;
    }
    void withdraw(float amount){
        if (amount > balance){
            throw InsufficientBalanceException();
        }
        balance = balance - amount;
        cout << "Withdrawal Successful" << endl;
        cout << "Remaining Balance = " << balance << endl;
    }
};

int main(){
    float balance, withdrawal;
    cout << "Enter Account Balance: ";
    cin >> balance;
    cout << "Enter Withdrawal Amount: ";
    cin >> withdrawal;
    BankAccount account(balance);
    try {
        account.withdraw(withdrawal);
    }
    catch (InsufficientBalanceException e){
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}