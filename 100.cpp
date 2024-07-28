#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void drive() {
        cout << "Vehicle is driving" << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() override {
        cout << "Car is driving" << endl;
    }
};

class Truck : public Vehicle {
public:
    void drive() override {
        cout << "Truck is driving" << endl;
    }
};

int main() {
    Vehicle* ptr;

    Car car;
    Truck truck;

    ptr = &car;
    ptr->drive(); // Calls Car's drive()

    ptr = &truck;
    ptr->drive(); // Calls Truck's drive()

    return 0;
}
