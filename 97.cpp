#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void volume() = 0;
};

class Sphere : public Shape {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}

    void area() override {
        cout << "Surface Area of Sphere: " << 4 * M_PI * radius * radius << endl;
    }

    void volume() override {
        cout << "Volume of Sphere: " << (4.0 / 3) * M_PI * radius * radius * radius << endl;
    }
};

class Cylinder : public Shape {
private:
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    void area() override {
        cout << "Surface Area of Cylinder: " << 2 * M_PI * radius * (radius + height) << endl;
    }

    void volume() override {
        cout << "Volume of Cylinder: " << M_PI * radius * radius * height << endl;
    }
};

int main() {
    Shape* ptr;

    Sphere sphere(5.0);
    Cylinder cylinder(5.0, 10.0);

    ptr = &sphere;
    ptr->area();
    ptr->volume();

    ptr = &cylinder;
    ptr->area();
    ptr->volume();

    return 0;
}
