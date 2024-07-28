#include <iostream>
using namespace std;

class Person {
public:
    virtual void greet() {
        cout << "Hello from Person!" << endl;
    }
};

class Student : public Person {
public:
    void greet() override {
        cout << "Hello from Student!" << endl;
    }
};

class Teacher : public Person {
public:
    void greet() override {
        cout << "Hello from Teacher!" << endl;
    }
};

int main() {
    Person* ptr;

    Student stu;
    Teacher tea;

    ptr = &stu;
    ptr->greet(); // Calls Student's greet()

    ptr = &tea;
    ptr->greet(); // Calls Teacher's greet()

    return 0;
}
