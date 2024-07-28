#include <iostream>
#include <string>
// Base class Person class Person { public:
virtual void greet() = 0; // Pure virtual function virtual ~Person() {} // Virtual destructor
};
// Derived class Student class Student : public Person { public:
void greet() override {
std::cout << "Hello, I'm a student." << std::endl;
}
};
// Derived class Teacher class Teacher : public Person { public:
void greet() override {
std::cout << "Hello, I'm a teacher." << std::endl;
}
};
int main() {
Person* p1 = new Student(); Person* p2 = new Teacher();
p1->greet(); // Output: Hello, I'm a student. p2->greet(); // Output: Hello, I'm a teacher.
delete p1; delete p2;
return 0;
}
