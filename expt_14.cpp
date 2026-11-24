#include <iostream>
using namespace std;

class InvalidQuantityException{
public:
    const char* what(){
        return "Invalid Quantity";
    }
};
class InsufficientStockException{
public:
    const char* what(){
        return "Insufficient Stock";
    }
};
class InvalidPriceException{
public:
    const char* what(){
        return "Invalid Product Price";
    }
};

int main(){
    float price;
    int quantity, stock;
    cout << "Enter Product Price: ";
    cin >> price;
    cout << "Enter Quantity: ";
    cin >> quantity;
    cout << "Enter Available Stock: ";
    cin >> stock;
    try{
        if (price <= 0) {
            throw InvalidPriceException();
        }
        if (quantity <= 0) {
            throw InvalidQuantityException();
        }
        if (quantity > stock){
            throw InsufficientStockException();
        }
        float total = price * quantity;
        stock = stock - quantity;
        cout << "Order Confirmed" << endl;
        cout << "Total Amount = " << total << endl;
        cout << "Remaining Stock = " << stock << endl;
    }
    catch (InvalidPriceException e){
        cout << "Exception: " << e.what() << endl;
    }
    catch (InvalidQuantityException e){
        cout << "Exception: " << e.what() << endl;
    }
    catch (InsufficientStockException e){
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}