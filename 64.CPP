#include <iostream>
// Base class Employee class Employee { public:
virtual double calculatePay() = 0; // Pure virtual function virtual ~Employee() {} // Virtual destructor
};
// Derived class Manager class Manager : public Employee { private: double salary;
public:
Manager(double s) : salary(s) {}
double calculatePay() override { return salary;
}
};
// Derived class Engineer class Engineer : public Employee { private:
double hourlyRate; int hoursWorked; public:
Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}
double calculatePay() override {
return hourlyRate * hoursWorked;
}
};
int main() {
Employee* e1 = new Manager(5000); // Manager with a fixed salary
Employee* e2 = new Engineer(40, 160); // Engineer with hourly rate and hours worked
std::cout << "Manager's pay: $" << e1->calculatePay() << std::endl; // Output:
Manager's pay std::cout << "Engineer's pay: $" << e2->calculatePay() << std::endl; // Output:
Engineer's pay
delete e1; delete e2;
return 0;
}
