#include <iostream>
#include <string>
// Base class Person class Person { public:
virtual void work() = 0; // Pure virtual function virtual ~Person() {} // Virtual destructor
};
// Derived class Employee class Employee : public Person { public:
void work() override {
std::cout << "Employee is working on tasks." << std::endl;
}
};
// Derived class Manager class Manager : public Person { public:
void work() override {
std::cout << "Manager is overseeing the team." << std::endl;
}
};
int main() {
Person* p1 = new Employee(); Person* p2 = new Manager();
p1->work(); // Output: Employee is working on tasks. p2->work(); // Output: Manager is overseeing the team.
delete p1; delete p2;
return 0;
}
