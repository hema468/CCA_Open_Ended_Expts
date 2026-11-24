#include <iostream>
using namespace std;

class IncorrectPINException{
public:
    const char* what(){
        return "Incorrect PIN.";
    }
};

int main(){
    int correctPIN = 1234;
    int enteredPIN;
    int attempts = 3;
    while (attempts > 0){
        cout << "Enter ATM PIN: ";
        cin >> enteredPIN;
        try{
            if (enteredPIN != correctPIN){
                throw IncorrectPINException();
            }
            cout << "PIN Verified Successfully" << endl;
            cout << "Access Granted" << endl;
            return 0;
        }
        catch (IncorrectPINException e){
            attempts--;
            cout << "Exception: " << e.what() << endl;
            cout << "Attempts Remaining: " << attempts << endl;
        }
    }
    cout << "ATM Card Blocked" << endl;
    return 0;
}