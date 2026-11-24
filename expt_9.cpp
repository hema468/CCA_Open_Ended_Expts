#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    try{
        if (num2 == 0){
            throw num2;
        }
        int result = num1 / num2;
        cout << "Division = " << result << endl;
    }
    catch (int x){
        cout << "Exception: Division by zero is not allowed." << endl;
    }
    return 0;
}