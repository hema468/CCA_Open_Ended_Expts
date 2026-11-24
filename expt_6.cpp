#include <iostream>
using namespace std;

class Payment {
public:
    virtual void makePayment(){
        cout << "Processing Payment" << endl;
    }
};
class CreditCard : public Payment{
    float amount;
public:
    CreditCard(float a){
        amount = a;
    }
    void makePayment(){
        cout << "Payment Mode: Credit Card" << endl;
        cout << "Amount Paid = " << amount << endl;
        cout << "Payment Successful" << endl;
    }
};
class UPI : public Payment{
    float amount;
public:
    UPI(float a) {
        amount = a;
    }
    void makePayment(){
        cout << "Payment Mode: UPI" << endl;
        cout << "Amount Paid = " << amount << endl;
        cout << "Payment Successful" << endl;
    }
};
class Cash : public Payment{
    float amount;
public:
    Cash(float a){
        amount = a;
    }
    void makePayment(){
        cout << "Payment Mode: Cash" << endl;
        cout << "Amount Paid = " << amount << endl;
        cout << "Payment Successful" << endl;
    }
};

int main(){
    int choice;
    float amount;
    cout << "1. Credit Card" << endl;
    cout << "2. UPI" << endl;
    cout << "3. Cash" << endl;
    cout << "Enter Payment Mode: ";
    cin >> choice;
    cout << "Enter Amount: ";
    cin >> amount;
    Payment *p;
    if (choice == 1){
        CreditCard c(amount);
        p = &c;
        p->makePayment();
    }
    else if (choice == 2){
        UPI u(amount);
        p = &u;
        p->makePayment();
    }
    else if (choice == 3){
        Cash c(amount);
        p = &c;
        p->makePayment();
    }
    else{
        cout << "Invalid Payment Mode" << endl;
    }
    return 0;
}