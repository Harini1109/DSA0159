#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    void area() override {
        cout << "Area of Circle: " << M_PI * radius * radius << endl;
    }
};

int main() {
    Shape* ptr;

    Rectangle rect(10.0, 5.0);
    Circle circ(7.0);

    ptr = &rect;
    ptr->area(); // Calls Rectangle's area()

    ptr = &circ;
    ptr->area(); // Calls Circle's area()

    return 0;
}
