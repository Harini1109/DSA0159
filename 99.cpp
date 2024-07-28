#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }

    void perimeter() override {
        cout << "Perimeter of Rectangle: " << 2 * (length + width) << endl;
    }
};

class Triangle : public Shape {
private:
    double a, b, c; // sides of the triangle
public:
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {}

    void area() override {
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of Triangle: " << area << endl;
    }

    void perimeter() override {
        cout << "Perimeter of Triangle: " << a + b + c << endl;
    }
};

int main() {
    Shape* ptr;

    Rectangle rect(10.0, 5.0);
    Triangle tri(3.0, 4.0, 5.0);

    ptr = &rect;
    ptr->area();
    ptr->perimeter();

    ptr = &tri;
    ptr->area();
    ptr->perimeter();

    return 0;
}
