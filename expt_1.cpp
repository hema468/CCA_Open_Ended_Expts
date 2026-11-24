#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Calculating Area" << endl;
    }
};
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    void area() {
        float result = 3.14 * radius * radius;
        cout << fixed << setprecision(2);
        cout << "Area of Circle = " << result << endl;
    }
};
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    void area() {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main() {
    int choice;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    Shape *s;
    if (choice == 1) {
        float radius;
        cout << "Enter radius: ";
        cin >> radius;
        Circle c(radius);
        s = &c;
        s->area();
    }
    else if (choice == 2){
        float length, breadth;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
        Rectangle r(length, breadth);
        s = &r;
        s->area();
    }
    else {
        cout << "Invalid choice";
    }
    return 0;
}