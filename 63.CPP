#include <iostream>
#include <string>
// Base class Vehicle class Vehicle { public:
virtual void drive() = 0; // Pure virtual function virtual ~Vehicle() {} // Virtual destructor
};
// Derived class Car class Car : public Vehicle { public:
void drive() override {
std::cout << "Car is driving on the road." << std::endl;
}
};
// Derived class Truck class Truck : public Vehicle { public:
void drive() override {
std::cout << "Truck is hauling cargo on the highway." << std::endl;
}
};
int main() {
Vehicle* v1 = new Car(); Vehicle* v2 = new Truck();
v1->drive(); // Output: Car is driving on the road. v2->drive(); // Output: Truck is hauling cargo on the highway.
delete v1; delete v2;
return 0;
}
