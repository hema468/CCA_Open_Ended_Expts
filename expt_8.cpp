#include <iostream>
using namespace std;

class Payment{
public:
    virtual void processPayment() {
        cout << "Processing Payment" << endl;
    }
};
class UPIPayment : public Payment{
    float amount;
public:
    UPIPayment(float a){
        amount = a;
    }
    void processPayment() {
        float total = amount;
        cout << "Payment Mode: UPI" << endl;
        cout << "Transaction Charge = 0" << endl;
        cout << "Total Amount = " << total << endl;
        cout << "Payment Status = Successful" << endl;
    }
};
class CardPayment : public Payment{
    float amount;
public:
    CardPayment(float a){
        amount = a;
    }
    void processPayment(){
        float charge = amount * 2 / 100;
        float total = amount + charge;
        cout << "Payment Mode: Card" << endl;
        cout << "Transaction Charge = " << charge << endl;
        cout << "Total Amount = " << total << endl;
        cout << "Payment Status = Successful" << endl;
    }
};
class NetBankingPayment : public Payment{
    float amount;
public:
    NetBankingPayment(float a){
        amount = a;
    }
    void processPayment(){
        float charge = amount * 1 / 100;
        float total = amount + charge;
        cout << "Payment Mode: Net Banking" << endl;
        cout << "Transaction Charge = " << charge << endl;
        cout << "Total Amount = " << total << endl;
        cout << "Payment Status = Successful" << endl;
    }
};

int main(){
    int choice;
    float amount;
    cout << "1. UPI Payment" << endl;
    cout << "2. Card Payment" << endl;
    cout << "3. Net Banking Payment" << endl;
    cout << "Enter Payment Mode: ";
    cin >> choice;
    cout << "Enter Amount: ";
    cin >> amount;
    Payment *p;
    if (choice == 1){
        UPIPayment u(amount);
        p = &u;
        p->processPayment();
    }
    else if (choice == 2){
        CardPayment c(amount);
        p = &c;
        p->processPayment();
    }
    else if (choice == 3) {
        NetBankingPayment n(amount);
        p = &n;
        p->processPayment();
    }
    else{
        cout << "Invalid Payment Mode" << endl;
    }
    return 0;
}