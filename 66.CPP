#include <iostream>
#include <cmath>
// Base class Shape class Shape { public:
virtual double area() = 0; // Pure virtual function for area virtual ~Shape() {} // Virtual destructor
};
// Derived class Rectangle class Rectangle : public Shape { private: double width, height;
public:
Rectangle(double w, double h) : width(w), height(h) {}
double area() override {
return width * height;
}
};
// Derived class Circle class Circle : public Shape { private: double radius;
public:
Circle(double r) : radius(r) {}
double area() override {
return M_PI * radius * radius;
}
};
int main() {
Shape* s1 = new Rectangle(5, 10); Shape* s2 = new Circle(7);
std::cout << "Rectangle area: " << s1->area() << std::endl; // Output: Rectangle
area
std::cout << "Circle area: " << s2->area() << std::endl; // Output: Circle area
delete s1; delete s2; return 0;
}
