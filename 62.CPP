#include <iostream>
#include <cmath>
// Base class Shape class Shape { public:
virtual double area() = 0; // Pure virtual function for area virtual double perimeter() = 0; // Pure virtual function for perimeter virtual ~Shape() {} // Virtual destructor
};
// Derived class Rectangle class Rectangle : public Shape { private: double width, height;
public:
Rectangle(double w, double h) : width(w), height(h) {}
double area() override {
return width * height;
}
double perimeter() override { return 2 * (width + height);
}
};
// Derived class Triangle class Triangle : public Shape { private: double side1, side2, side3;
public:
Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
double area() override { // Using Heron's formula double s = (side1 + side2 + side3) / 2;
return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
double perimeter() override { return side1 + side2 + side3;
}
};
int main() {
Shape* s1 = new Rectangle(5, 10); Shape* s2 = new Triangle(3, 4, 5);
std::cout << "Rectangle area: " << s1->area() << std::endl; // Output: Rectangle
area
std::cout << "Rectangle perimeter: " << s1->perimeter() << std::endl; // Output:
Rectangle perimeter
std::cout << "Triangle area: " << s2->area() << std::endl; // Output: Triangle area std::cout << "Triangle perimeter: " << s2->perimeter() << std::endl; // Output:
Triangle perimeter
delete s1; delete s2;
return 0;
}
