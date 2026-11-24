#include <iostream>
using namespace std;

class InvalidMarksException{
public:
    const char* what() {
        return "Invalid marks! Marks must be between 0 and 100.";
    }
};

int main(){
    int n;
    int marks[100];
    int total = 0;
    float average;
    cout << "Enter number of subjects: ";
    cin >> n;
    try{
        if (n <= 0 || n > 100){
            throw InvalidMarksException();
        }
        cout << "Enter marks for " << n << " subjects:" << endl;
        for (int i = 0; i < n; i++){
            cin >> marks[i];
            if (marks[i] < 0 || marks[i] > 100){
                throw InvalidMarksException();
            }
            total = total + marks[i];
        }
        average = (float)total / n;
        cout << "Total = " << total << endl;
        cout << "Average = " << average << endl;
        if (average >= 90){
            cout << "Grade = A+" << endl;
        }
        else if (average >= 80){
            cout << "Grade = A" << endl;
        }
        else if (average >= 70){
            cout << "Grade = B" << endl;
        }
        else if (average >= 60){
            cout << "Grade = C" << endl;
        }
        else if (average >= 40){
            cout << "Grade = D" << endl;
        }
        else{
            cout << "Grade = F" << endl;
        }
    }
    catch (InvalidMarksException e){
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}