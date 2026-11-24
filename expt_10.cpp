#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int index;
    cout << "Array Elements: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter Index: ";
    cin >> index;
    try {
        if (index < 0 || index >= 5) {
            throw index;
        }
        cout << "Element = " << arr[index] << endl;
    }
    catch (int x)
    {
        cout << "Exception: Array index out of bounds." << endl;
    }
    return 0;
}