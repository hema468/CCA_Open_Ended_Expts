#include <iostream>
using namespace std;

template <class T>
class Calculator {   
     T a, b;
public:
    Calculator(T x, T y){
        a = x;
        b = y;
    }
    void calculate(){
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;
        if (b != 0){
            cout << "Division = " << a / b << endl;
        }
        else{
            cout << "Division is not possible" << endl;
        }
    }
};

int main(){
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    Calculator<double> obj(num1, num2);
    obj.calculate();
    return 0;
}