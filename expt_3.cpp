#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    virtual void displayDetails() {
        cout << "Vehicle Details" << endl;
    }
};
class Car : public Vehicle {
    string brand;
    string model;
public:
    Car(string b, string m) {
        brand = b;
        model = m;
    }
    void displayDetails() {
        cout << "Vehicle: Car" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};
class Bike : public Vehicle {
    string brand;
    string model;
public:
    Bike(string b, string m) {
        brand = b;
        model = m;
    }
    void displayDetails(){
        cout << "Vehicle: Bike" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};
class Bus : public Vehicle{
    string brand;
    string model;
public:
    Bus(string b, string m) {
        brand = b;
        model = m;
    }
    void displayDetails() {
        cout << "Vehicle: Bus" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

int main() {
    int choice;
    string brand, model;
    cout << "1. Car" << endl;
    cout << "2. Bike" << endl;
    cout << "3. Bus" << endl;
    cout << "Enter Vehicle Type: ";
    cin >> choice;
    cout << "Enter Brand: ";
    cin >> brand;
    cout << "Enter Model: ";
    cin >> model;
    Vehicle *v;
    if (choice == 1){
        Car c(brand, model);
        v = &c;
        v->displayDetails();
    }
    else if (choice == 2){
        Bike b(brand, model);
        v = &b;
        v->displayDetails();
    }
    else if (choice == 3){
        Bus bus(brand, model);
        v = &bus;
        v->displayDetails();
    }
    else{
        cout << "Invalid Vehicle Type" << endl;
    }
    return 0;
}