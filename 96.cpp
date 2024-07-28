#include <iostream>
using namespace std;

class Person {
public:
    virtual void work() {
        cout << "Person is working" << endl;
    }
};

class Employee : public Person {
public:
    void work() override {
        cout << "Employee is working" << endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        cout << "Manager is working" << endl;
    }
};

int main() {
    Person* ptr;

    Employee emp;
    Manager mgr;

    ptr = &emp;
    ptr->work(); // Calls Employee's work()

    ptr = &mgr;
    ptr->work(); // Calls Manager's work()

    return 0;
}
