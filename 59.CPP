#include <iostream>
#include <cmath>
// Base class Shape class Shape { public:
virtual double area() = 0; // Pure virtual function for area virtual double volume() = 0; // Pure virtual function for volume virtual ~Shape() {} // Virtual destructor
};
// Derived class Sphere class Sphere : public Shape { private: double radius;
public:
Sphere(double r) : radius(r) {}
double area() override {
return 4 * M_PI * std::pow(radius, 2);
}
double volume() override {
return (4.0/3.0) * M_PI * std::pow(radius, 3);
}
};
// Derived class Cylinder class Cylinder : public Shape { private: double radius, height;
public:
Cylinder(double r, double h) : radius(r), height(h) {}
double area() override {
return 2 * M_PI * radius * (radius + height);
}
double volume() override {
return M_PI * std::pow(radius, 2) * height;
}
};
int main() {
Shape* s1 = new Sphere(5); Shape* s2 = new Cylinder(3, 7);
std::cout << "Sphere area: " << s1->area() << std::endl; // Output: Sphere area std::cout << "Sphere volume: " << s1->volume() << std::endl; // Output: Sphere
volume
std::cout << "Cylinder area: " << s2->area() << std::endl; // Output: Cylinder area std::cout << "Cylinder volume: " << s2->volume() << std::endl; // Output: Cylinder
volume
delete s1; delete s2;
return 0;
}
