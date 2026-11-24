#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Patient Age.";
    }
};
class InvalidQuantityException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Medicine Quantity.";
    }
};
class NegativeAmountException : public exception {
public:
    const char* what() const noexcept override {
        return "Billing amount cannot be negative.";
    }
};
int main() {
    int age, quantity;
    double consultation, lab, medicine, total;
    try {
        cout << "Enter Patient Age: ";
        cin >> age;
        if (age < 0)
            throw InvalidAgeException();
        cout << "Enter Consultation Charges: ";
        cin >> consultation;
        cout << "Enter Laboratory Charges: ";
        cin >> lab;
        cout << "Enter Medicine Price: ";
        cin >> medicine;
        cout << "Enter Medicine Quantity: ";
        cin >> quantity;
        if (quantity <= 0)
            throw InvalidQuantityException();
        if (consultation < 0 || lab < 0 || medicine < 0)
            throw NegativeAmountException();
        total = consultation + lab + (medicine * quantity);
        cout << "\n----- Hospital Bill -----" << endl;
        cout << "Patient Age: " << age << endl;
        cout << "Consultation: " << consultation << endl;
        cout << "Laboratory: " << lab << endl;
        cout << "Medicine: " << medicine * quantity << endl;
        cout << "Total Bill: " << total << endl;
        cout << "Bill Generated Successfully!" << endl;
    }
    catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}